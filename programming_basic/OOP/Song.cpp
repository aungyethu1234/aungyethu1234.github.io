#include <iostream>
using namespace std;
class Song {
    private:
        string title;
        string album;
        string singer;
    public:
        Song() {
            title = "unknown title";
            album = "unknown album";
            singer = "unknown singer";
        }
        void setTitle(string title) {
            this->title = title;
        }
        string getTitle() {
            return this->title;
        }
        void setAlbum(string album) {
            this->album = album;
        }
        string getAlbum() {
            return this->album;
        }
        void setSinger(string singer) {
            this->singer = singer;
        }
        string getSinger() {
            return this->singer;
        }
        void showData() {
            cout<<"\n";
            cout<<getTitle()<<"\n";
            cout<<album<<"\t";
            cout<<singer<<"\n";
        }
};


int main() {
    // Song songs[3];
    // // Song s = songs[0];
    // // cout<<"Title: "<<s.getTitle();
    // // cout<<"Title: "<<songs[0].getTitle();
    // string _title, _album, _singer;
    // for(int i = 0; i < 3; i++) {
    //     cout<<"Enter data for song "<<(i + 1)<<"\n";
    //     cout<<"Title: ";
    //     getline(cin,_title);
    //     cout<<"Album: ";
    //     getline(cin, _album);
    //     cout<<"Singer: ";
    //     getline(cin, _singer);

    //     songs[i].setTitle(_title);
    //     songs[i].setAlbum(_album);
    //     songs[i].setSinger(_singer);
    // }
    // // output
    // cout<<"\n--------- Song List --------\n";
    // cout<<"Song Title\t Album\t Singer\n";
    // cout<<"-------------------------------";
    // for(int i = 0; i < 3; i++) {
    //     songs[i].showData();
    // }
    Song songs2 = Song();
    cout<<"Album: "<<songs2.getAlbum()<<"\n";
    cout<<"Singer: "<<songs2.getSinger()<<"\n";
    cout<<"title: "<<songs2.getTitle()<<"\n";
    

    return 0;
}