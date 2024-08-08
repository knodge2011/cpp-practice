#include <iostream>
#include<list>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

class youTubeChannel{
    public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;
  
};

int main(){
    youTubeChannel ytChannel;
    ytChannel.Name = "Knowledge";
    ytChannel.OwnerName = "knole";
    ytChannel.SubscriberCount = 200;
    ytChannel.PublishedVideoTitles = {"c++ ", "HTML and CSS ","database"};

    cout << "Name: "<< ytChannel.Name<<endl;
    cout << "OwnerName: "<< ytChannel.OwnerName<<endl;
    cout << "SubscriberCount: "<< ytChannel.SubscriberCount<<endl;
    cout<< "Videos."<<endl;
    for(string videoTitle : ytChannel.PublishedVideoTitles){
        cout << videoTitle <<endl;
    }

    return 0;
}
