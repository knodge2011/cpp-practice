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
    int ContentQuality;

public:
    youTubeChannel(string name, string ownername){
        Name = name;
        OwnerName = ownername;
        SubscriberCount = 0;
        ContentQuality = 0;
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
    void CheckAnalytics(){
        if(ContentQuality < 5)
            cout << OwnerName << " has a bad quality content."<<endl;
        else
            cout << OwnerName << " has great content."<<endl;
    }
};

class CookingYouTubeChannel:public youTubeChannel{
    public:
    CookingYouTubeChannel(string name,string ownerName):youTubeChannel(name,ownerName){

    }
    void practice(){
        cout <<OwnerName<< " is Practice cooking, new recipes and experimenting with spice... "<<endl;
        ContentQuality ++;
    }

};

class SingerYouTubeChannel:public youTubeChannel{
    public:
    SingerYouTubeChannel(string name,string ownerName):youTubeChannel(name,ownerName){

    }
    void practice(){
        cout <<OwnerName<< " is Practicing singing learning new songs..."<<endl;
        ContentQuality ++;
    }

};

int main(){

    CookingYouTubeChannel cookingchanel("Sea Food", "knowledge");
    SingerYouTubeChannel singerchanel("knodge kitchen", "knowle");
    
    cookingchanel.practice();
    singerchanel.practice();
    singerchanel.practice();
    singerchanel.practice();
    singerchanel.practice();
    singerchanel.practice();
  
    youTubeChannel* yt1 = & cookingchanel;
    youTubeChannel* yt2 = & singerchanel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    return 0;
}
