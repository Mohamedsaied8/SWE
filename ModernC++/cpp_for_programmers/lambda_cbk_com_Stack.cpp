#include <iostream>
#include <functional>


namespace SwC
{
    void ErrorHandler()
    {
        std::cout << "handling error\n";
    }

    void RequestHandler()
    {
        std::cout << "handling request\n";
    }
}
namespace ara::com
{
    // constexpr int ERROR = 1;
    // void OnEvent(bool &event)
    // {
    //     if(event != ERROR)
    //     {
           
    //     }
    // }

    void Send(const std::string &data, std::function<void (bool&)> onvent_callback)
    {
        std::cout << "sent " << data << "\n";
        bool response{true};
        onvent_callback(response);
    }

    void receive(std::string &buffer, std::function<void (std::string &buffer)> onrecv_callback)
    {
        onrecv_callback(buffer);
    }
}


int main()
{
    ara::com::Send("Request\n", [](bool response){
                                if(response)
                                {
                                    SwC::RequestHandler();
                                }
                                else
                                {
                                   SwC::ErrorHandler();
                                }
                         });

    std::string recv_buffer{};
    ara::com::receive(recv_buffer, [](std::string recv_buffer)
                                    {
                                        recv_buffer = low_level_recv();
                                    });
   std::cout << "show incoming data " << recv_buffer << "\n";                                

}