#include<iostream>
#include<fstream>
#include <string> 
#include<math.h>
using namespace std;
int main()
{
    ifstream myfile;
     myfile.open("banana.csv");
    ofstream outfile;
    outfile.open("words4.csv");
    string answer;
    while(myfile.good())
    {
         string line,chinese,english,matha,mathb,science,social,listen;
            
            
        int sum=0;
        getline(myfile,line,',');
        getline(myfile,chinese,',');
        getline(myfile,english,',');
        getline(myfile,matha,',');
        getline(myfile,mathb,',');
        getline(myfile,science,',');
        getline(myfile,social,',');
        getline(myfile,listen,'\n');
       
        answer="";
        if(chinese!="")
        {
            sum++;
            answer+=chinese;
        }
        
        if(english!="")
        {
            sum++;
            if(sum!=1)
            answer=answer+"<br>"+english;
            else
            answer+=english;
        }
         if(matha!="")
        {
            sum++;
            if(sum!=1)
            answer=answer+"<br>"+matha;
            else
            answer+=matha;
        }
         if(mathb!="")
        {
            sum++;
            if(sum!=1)
            answer=answer+"<br>"+mathb;
            else
            answer+=mathb;
        }
         if(science!="")
        {
            sum++;
            if(sum!=1)
            answer=answer+"<br>"+science;
            else
            answer+=science;
        }
         if(social!="")
        {
            sum++;
            if(sum!=1)
            answer=answer+"<br>"+social;
            else
            answer+=social;
        }
        if(listen!="")
        {
            sum++;
            if(sum!=1)
            answer=answer+"<br>"+listen;
            else
            answer+=listen;
        }
        cout<<answer<<endl;
        outfile<<line<<","<<answer<<","<<endl;
        

       
         
        
        

    }
 myfile.close();
     outfile.close();
}
