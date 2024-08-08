#include <iostream>
#include<list>
using namespace std;

class youTubeChannel{
private:
    string Name;
    
    int SubscriberCount;
    list<string> PublishedVideoTitles;

protected:
    string OwnerName;

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

class CookingYouTubeChannel:public youTubeChannel{
    public:
    CookingYouTubeChannel(string name,string ownerName):youTubeChannel(name,ownerName){

    }
    void practice(){
        cout <<OwnerName<< "Practice cooking, new recipes and experimenting with spice... "<<endl;
    }

};

int main(){

    CookingYouTubeChannel cookingchanel("Sea Food", "knowledge");
    CookingYouTubeChannel cookingchanel2("knodge kitchen", "knowle");
    // cookingchanel.PublishVideo("crab stew");
    // cookingchanel.PublishVideo("shrimp boiled");
    // cookingchanel.PublishVideo("puffer fish prep...");
    // cookingchanel.subscribe();
    // cookingchanel.subscribe();
    // cookingchanel.getInfo();
    cookingchanel.practice();
    cookingchanel.practice();
  

    return 0;
}
