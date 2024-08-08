#include <iostream>
#include<list>
using namespace std;

class youTubeChannel{
    private:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;

    public:
    youTubeChannel(string name, string ownername){
        Name = name;
        OwnerName = ownername;
        SubscriberCount = 0;
    }
    void getInfo(){
        cout << "Name: "<< Name<<endl;
        cout << "OwnerName: "<< OwnerName<<endl;
        cout << "SubscriberCount: "<< SubscriberCount<<endl;
        cout<< "Videos."<<endl;
        for(string videoTitle : PublishedVideoTitles){
            cout << videoTitle <<endl;
        }
    }

    void subscribe(){
        SubscriberCount ++;
    }

    void unSubscribe(){
        if(SubscriberCount > 0)
            SubscriberCount --;
    }

    void PublishVideo(string title){
        PublishedVideoTitles.push_back(title);
    }
};

int main(){
    youTubeChannel ytChannel("Knowledge","knole");
    ytChannel.PublishVideo("C++ for beginners");
    ytChannel.PublishVideo("HTML, CSS and Javascript");
    youTubeChannel ytChannel2("gudy","knoledg");

    // ytChannel.subscribe();
    // ytChannel.subscribe();
    // ytChannel.subscribe();
    ytChannel.unSubscribe();
    ytChannel.getInfo();
    
  
    return 0;
}
