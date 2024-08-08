#include <iostream>
#include<list>
using namespace std;

class youTubeChannel{
    public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;

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
};

int main(){
    youTubeChannel ytChannel1("Knowledge","knole");
    ytChannel1.PublishedVideoTitles.push_back("C++ for beginners");
    ytChannel1.PublishedVideoTitles.push_back("HTML, CSS and Javascript");
    youTubeChannel ytChannel2("gudy","knoledg");

    ytChannel1.getInfo();
    ytChannel2.getInfo();
  
    return 0;
}
