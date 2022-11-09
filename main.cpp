#include <bits/stdc++.h>
using namespace std;

class user{
    protected:
    char username[20];
    public:
    void get(){
        cout << "Enter username: ";
        cin >> username;
    }
};

class player:public user{
    public:
    int score;
    player(){
        score = 0;
    }
    void put(){
        cout << "Username: "<<user::username<<endl;
        cout << "Score: "<<score<<endl;
    }
};

class Question{
    public:
    string ques;
    string op1;
    string op2;
    string op3;
    string op4;
    int ans;
    void setValues(string,string,string,string,string,int);
    int askQuestion();
    friend player;
};

class cricQues:public Question{
};

class politicQues:public Question{
};

class interQues:public Question{
};

class movieQues:public Question{
};

class histQues:public Question{
};


int main(){
    char confirm;
    player p;
    histQues hQues[10];
    cricQues cQues[10];
    interQues iQues[10];
    movieQues mQues[10];
    cout << R"(
 _    _      _                            _          _   _            _____              _____       _     
| |  | |    | |                          | |        | | | |          /  __ \ _     _    |  _  |     (_)    
| |  | | ___| | ___ ___  _ __ ___   ___  | |_ ___   | |_| |__   ___  | /  \/| |_ _| |_  | | | |_   _ _ ____
| |/\| |/ _ \ |/ __/ _ \| '_ ` _ \ / _ \ | __/ _ \  | __| '_ \ / _ \ | |  |_   _|_   _| | | | | | | | |_  /
\  /\  /  __/ | (_| (_) | | | | | |  __/ | || (_) | | |_| | | |  __/ | \__/\|_|   |_|   \ \/' / |_| | |/ / 
 \/  \/ \___|_|\___\___/|_| |_| |_|\___|  \__\___/   \__|_| |_|\___|  \____/             \_/\_\\__,_|_/___|

----------------------------------------------By: Saumya & Ankit---------------------------------------------
    )"<<endl;

    // Quiz Questions and Answers
    hQues[0].setValues("Which of the following Upanishads is written in prose ?","Isa","Katha","Brihadaranyaka","Svetasvatara",3);
    hQues[1].setValues("What was the other name of Harshavardhana?","Siladitya","Harshaditya","Bhaskarvarman","Vishnuvardhan",1);
    hQues[2].setValues("Who is known as the Father of Tamil literature?","Nakkirar","Pushyamitra","Aggatiyam","Agastaya",4);
    hQues[3].setValues("The hymns of regveda were composed by ?","Hotri","Udgatri","Adhvaryas","Nakshotri",1); 
    hQues[4].setValues("Who among the following was contemporary of Pushyamitra Sunga?","Patanjali","Kalidas","Vasudeva","Heliodorus",1);
    hQues[5].setValues("Which of the following is / are the 9 gems of Chandragupta Vikramaditya?","Amarsimha","Harisena","Kahapanaka"," All of the above",4);
    hQues[7].setValues("TWho among the following king is related to Repair of Sudarsana Lake?","Rudradaman","Gautmi Putra Satkarni","Kharavela","Ashoka",1);
    hQues[7].setValues("Who among the following is famous for saving the empire from the Huna tribe, which had overran Asia and Europe. ?","Samudra Gupta","Chandra Gupta II","Skandagupta","None of the above",3);
    hQues[8].setValues("The Bijak Inscription is related to which among the following kings?","Samudra Gupta","Ashoka","Pulkesin II","Chandra Gupta",2);
    hQues[9].setValues("We find the coins of a very less known prince called Kacha. Kacha is considered to have been from which of the following dynasties?","Vakataka"," Satavahna","Gupta"," Kushans",3);
    cQues[0].setValues("When was the Ashes first played?","1872","1877","1882","1887",2);
    cQues[1].setValues("Who won the first ever Cricket World Cup in 1975?","Australia","England","India","West Indies",4);
    cQues[2].setValues("What is the largest cricket stadium in the world??","Eden Gardens","Melbourne Cricket Club","Lords","Narendra Modi Stadium",4);
    cQues[3].setValues("How many ways are there of getting out?","7","8","9","10",4);
    cQues[4].setValues("How long is the wicket on a cricket pitch?","18 yards","20 yards","22 yards","24 yards",3);
    cQues[5].setValues("Who did England beat in the final of the 2019 Cricket World Cup?","Australia","India","New Zealand","South Africa",3);
    cQues[6].setValues("Which fast bowler has taken the most test wickets?","Stuart Broad","Dale Steyn","Glenn McGrath","James Anderson",4);
    cQues[7].setValues("WWhat is the nickname of Sachin Tendulkar?","The Little Genius","The Little Master","The God of Cricket","Master Blaster",2);
    cQues[8].setValues("Which Australian player has scored the most test runs?","Steve Waugh","Don Bradman","Ricky Ponting","Matthew Hayden",3);
    cQues[9].setValues("The first official international match of cricket was held in 1844 between...?","England & Australia","India & Pakistan","USA & Canada","England & India",3);

    // Main Game
    p.get();
    cout << "Do you want to play: (Y/N)"<<endl;
    cin >>confirm;
    int uAns;
    int count = 0;
    if(confirm=='Y'){
        while(1){
            if(count < 5){
                hQues[count].askQuestion();
                cout << "Enter your answer: ";
                cin >>uAns;
                if(uAns == hQues[count].ans){
                    p.score++;
                    count++;
                }else{
                    p.put();
                    cout << "Better Luck Next Time!"<<endl;
                    cout << "Correct Answer: " <<hQues[count].ans;
                    exit(1);
                }
            }else{
                cQues[count].askQuestion();
                cout << "Enter your answer: ";
                cin >> uAns;
                if(uAns == cQues[count].ans){
                    p.score++;
                    count++;
                }else{
                    p.put();
                    cout << "Better Luck Next Time"<<endl;
                    cout << "Correct Answer: "<<cQues[count].ans;
                    exit(1);
                }
            }
            if(count == 9){
                p.put();
                exit(1);
            }
        }
    }else{
        cout<<"Okk, See you later !";
    }
    getchar();
    return 0;
}

void Question::setValues(string q, string a1,string a2, string a3,string a4, int ca){
    ques = q;
    op1 = a1;
    op2 = a2;
    op3 = a3;
    op4 = a4;
    ans = ca;
}

int Question::askQuestion(){
    cout << endl;
    cout <<"Q. " +ques <<endl;
    cout << "1."+op1+"\t";
    cout<<"2."+op2+"\t";
    cout<<"3."+op3+"\t";
    cout<<"4."+op4<<endl;
}