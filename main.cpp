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
    int score;
    public:
    player(){
        score = 0;
    }
    void put(){
        cout << "Username: "<<user::username<<endl;
        cout << "Score: "<<score<<endl;
    }
    player operator++(){
        player pl;
        pl.score = ++score;
        return pl;
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
    politicQues pQues[10];
   cout << R"(
 _    _      _                            _          _   _            _____              _____       _     
| |  | |    | |                          | |        | | | |          /  __ \ _     _    |  _  |     (_)    
| |  | | ___| | ___ ___  _ __ ___   ___  | |_ ___   | |_| |__   ___  | /  \/| |_ _| |_  | | | |_   _ _ ____
| |/\| |/ _ \ |/ __/ _ \| '_ ` _ \ / _ \ | __/ _ \  | __| '_ \ / _ \ | |  |_   _|_   _| | | | | | | | |_  /
\  /\  /  __/ | (_| (_) | | | | | |  __/ | || (_) | | |_| | | |  __/ | \__/\|_|   |_|   \ \/' / |_| | |/ / 
 \/  \/ \___|_|\___\___/|_| |_| |_|\___|  \__\___/   \__|_| |_|\___|  \____/             \_/\_\\__,_|_/___|

----------------------------------------------By: Saumya & Ankit---------------------------------------------
    )" << endl;

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
    cQues[7].setValues("WWhat is the nickname of Sachin Tendulkar?","The Little Genius","The Little Master","The God of Cricket","Master Blaster",4);
    cQues[8].setValues("Which Australian player has scored the most test runs?","Steve Waugh","Don Bradman","Ricky Ponting","Matthew Hayden",3);
    cQues[9].setValues("The first official international match of cricket was held in 1844 between...?","England & Australia","India & Pakistan","USA & Canada","England & India",3);
    pQues[0].setValues("The Parliament of India cannot be regarded as a sovereign body because?","it can legislate only on subjects entrusted to the Centre by the Constitution","it has to operate within the limits prescribed by the Constitution","the Supreme Court can declare laws passed by parliament as unconstitutional if they contravene the provisions of the Constitution","All of the above",4);
    pQues[1].setValues("The name of the Laccadive, Minicoy and Amindivi islands was changed to Lakshadweep by an Act of Parliament in","1970","1971","1972","1973",4);
    pQues[2].setValues("The number of writs that can be prayed for and issued by the Supreme Court and/or a High Court is","3","4","5","6",3);
    pQues[3].setValues("The Parliament exercises control over council of ministers, the real executive, in several ways. Which one of the following has been wrongly listed as a method of control over executive?","Questions","Supplementary questions","Adjournment motions","None of the above",4);
    pQues[4].setValues("The members of Lok Sabha hold office for a term of","4 years","5 years","6 years","3 years",5);
    pQues[5].setValues("The Parliament of India can make use of the residuary powers","at all times	","None of the above","only during national emergency","during national emergency as well as constitutional emergency as well in a state",1);
    pQues[6].setValues("The present Lok Sabha is the","14th Lok Sabha","15th Lok Sabha","16th Lok Sabha","17th Lok Sabha",4);
    pQues[7].setValues("The power to decide an election petition is vested in the","Parliament","Supreme Court","High courts","Election Commission",3);
    pQues[8].setValues("The members of the panchayat are","nominated by the district officer","the electorates of the respective territorial constituencies","nominated by local self-government minister of the state","nominated by the block development organization",2);
    pQues[9].setValues("The members of the Rajya Sabha are elected by","the people","Lok Sabha","elected members of the legislative assembly","elected members of the legislative council",3);
    mQues[0].setValues("The code in The Matrix comes from what food recipes?","Sushi recipes","Dumpling recipes","Stir-fry recipes","none of the above", 1);
    mQues[1].setValues("What’s the name of Meatloaf’s character in The Rocky Horror Picture Show?","Henry","Eddie","Chuck","Al",2 );
    mQues[2].setValues("Who actually drew the sketch of Rose in Titanic?","Leonardo DiCaprio","Billy Zane","James Cameron","Kathy Bates",3 );
    mQues[3].setValues("Who voices Joy in Pixar’s Inside Out?","Tina Fey","Kathryn Hahn","Ellen DeGeneres","Amy Poehler", 4);
    mQues[4].setValues("Where were The Lord of the Rings movies filmed?","Ireland","Iceland","New Zealand","Australia",3 );
    mQues[5].setValues("Which country does Forrest Gump travel to as part of the All-American Ping-Pong Team?","Vietnam","China","Sweden","France", 2);
    mQues[6].setValues("Which famous Pulp Fiction scene was filmed backward?","Vincent and Mia’s dance scene","Mia’s overdose scene","The royale with cheese scene",". The Ezekiel 25:17 scene",2 );
    mQues[7].setValues("Which actor was in the following movies: The Outsiders, Wayne’s World, and Tommy Boy?","Tom Cruise","Matt Dillon","Rob Lowe","C. Thomas Howell",3 );
    mQues[8].setValues("Who was the first Black person to win an Oscar?","Hattie McDaniel","Sidney Poitier","Dorothy Dandridge","James Earl Jones",1 );
    mQues[9].setValues("Which is not the name of a child selected to tour the Wonka factory in Willy Wonka and the Chocolate Factory?","Billy Warp","Veruca Salt","Mike Teavee","Charlie Bucket",1);
    
    iQues[0].setValues("The Turkey government had recently signed military and maritime agreement with GNA. GNA is _________.?","Libya’s interim government","Guinea’s interim government","Nigeria’s interim government","Liberia’s interim government",1);
    iQues[1].setValues("The US Congress has recently demanded a probe into the aging Runit Dome as a part of the recently approved defence bill. Where is the Runit Dome located?","Marshall Islands","Palau","Maui","Federated States of Micronesia",1 );
    iQues[2].setValues("According to the recent estimates published by United Nations Conference on Trade and Development (UNCTAD), which economy is most affected by the coronavirus outbreak?","United States","Taiwan Province of China","European Union","Japan",3 );
    iQues[3].setValues("Which country is set to create a $4 billion anti-crisis fund to protect its economy from COVID-19 outbreak?","United States","Russia","United Kingdom","China",2 );
    iQues[4].setValues("Which country has been confirmed as the first co-chair of the Governing Council on the Coalition for Disaster Resilient Infrastructure (CDRI), led by India?","Australia","United Kingdom","South Africa","Argentina", 2);
    iQues[5].setValues("Which international organisation launched a USD 2 billion global humanitarian response plan, to fight the coronavirus pandemic in the poorest countries?","International Monetary Fund","World Bank"," United Nations","Asian Development Bank",3 );
    iQues[6].setValues("Which private foundation is set to become the largest funder of the World Health Organisation (WHO)?","Gavi, The Vaccine Alliance","Ford Foundation","Bill & Melinda Gates Foundation","Coalition for Epidemic Preparedness Innovations",3 );
    iQues[7].setValues("Where is the headquarters of the Office of the United Nations High Commissioner on Human Rights (OHCHR) located?","New York","Geneva","Paris","Nairobi",2 );
    iQues[8].setValues("Which organisation has collaborated with trade body FICCI, for a campaign to support vulnerable population?","World Bank","UNICEF","International Monetary Fund","World Economic Forum",2 );
    iQues[9].setValues("Which country has conducted a successful flight test of a 3D-printed aircraft engine?","China","India","Russia"," United States",3);
    // Main Game
    p.get();
    cout << "Do you want to play: (Y/N)"<<endl;
    cin >>confirm;
    int uAns;
    int count = 0;
    if(confirm=='Y'){
        while(1){
            if(count == 0 || count == 5){
                hQues[count].askQuestion();
                cout << "Enter your answer: ";
                cin >>uAns;
                if(uAns == hQues[count].ans){
                    ++p;
                    count++;
                }else{
                    p.put();
                    cout << "Better Luck Next Time!"<<endl;
                    cout << "Correct Answer: " <<hQues[count].ans;
                    exit(1);
                }
            }else if(count == 1 || count == 6){
                cQues[count].askQuestion();
                cout << "Enter your answer: ";
                cin >>uAns;
                if(uAns == cQues[count].ans){
                    ++p;
                    count++;
                }else{
                    p.put();
                    cout << "Better Luck Next Time!"<<endl;
                    cout << "Correct Answer: " <<cQues[count].ans;
                    exit(1);
                }
            }else if(count == 2 || count == 7){
                mQues[count].askQuestion();
                cout << "Enter your answer: ";
                cin >>uAns;
                if(uAns == mQues[count].ans){
                    ++p;
                    count++;
                }else{
                    p.put();
                    cout << "Better Luck Next Time!"<<endl;
                    cout << "Correct Answer: " <<mQues[count].ans;
                    exit(1);
                }
            }else if(count == 3 || count == 8){
                cQues[count].askQuestion();
                cout << "Enter your answer: ";
                cin >>uAns;
                if(uAns == cQues[count].ans){
                    ++p;
                    count++;
                }else{
                    p.put();
                    cout << "Better Luck Next Time!"<<endl;
                    cout << "Correct Answer: " <<cQues[count].ans;
                    exit(1);
                }
            }else{
                iQues[count].askQuestion();
                cout << "Enter your answer: ";
                cin >> uAns;
                if(uAns == iQues[count].ans){
                    ++p;
                    count++;
                }else{
                    p.put();
                    cout << "Better Luck Next Time"<<endl;
                    cout << "Correct Answer: "<<iQues[count].ans;
                    exit(1);
                }
            }
            if(count == 9){
                cout << "Hurrray !!! You won the Game!!!"<<endl;
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