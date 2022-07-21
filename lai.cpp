#include<iostream>
#include<fstream>
#include <string> 
#include<math.h>
using namespace std;
int main()
{
    ifstream myfile;
    
    myfile.open("last.csv");
    string biology[102];
     string chinese[102];
      string chemistry[102];
     string english[102];
      string geography[102];
     string history[102];
      string matha[102];
     string mathb[102];
      string physics[102];
     string society[102];
     string biologyp[102];
     string chinesep[102];
      string chemistryp[102];
     string englishp[102];
      string geographyp[102];
     string historyp[102];
      string mathap[102];
     string mathbp[102];
      string physicsp[102];
     string societyp[102];
     float biologyo[102];
     float chineseo[102];
      float chemistryo[102];
     float englisho[102];
      float geographyo[102];
     float historyo[102];
      float mathao[102];
     float mathbo[102];
      float physicso[102];
     float societyo[102];


     string university[11];
    string subject[11];
    string year1[11];
    string chineser[11];
    string englishr[11];
    string mathar[11];
    string mathbr[11];
    string physicsr[11];
    string chemistryr[11];
    string biologyr[11];
    string historyr[11];
    string geographyr[11];
    string citizenr[11];
    string averager[11];
    int j=0;int i=0;int k=0;int time=0;
    while(myfile.good())
    {

        string line,people;
      
        getline(myfile,line,',');
        getline(myfile,people,'\n');
       
        k=k%2;
        if((j<102))
        {
            biology[i]="";
            biology[i].append(line);
            
            biologyp[i]="";
            biologyp[i].append(people);
            
            i++;
            if(i==102)
            {
            i=0;
            }
            j++;
            
        }
    
        

         else if(j>=102&&j<=203)
        {
             chemistry[i]="";
            chemistry[i].append(line);
            
            chemistryp[i]="";
            chemistryp[i].append(people); 
            i++;
             if(i==102)
            {
            i=0;
            }
            j++;
            
        }
        
        
        else if(j>=204&&j<=305)
        {
           


             chinese[i]="";
           chinese[i].append(line);
           
            chinesep[i]="";
             chinesep[i].append(people);
            
            i++;
            if(i==102)
            {
            i=0;
            }
            j++;
            
            
        }
        

        else if(j>=306&&j<408)
        {
            english[i]="";
            english[i].append(line);
           
            englishp[i]="";
            englishp[i].append(people); 
            i++;
             if(i==102)
            {
            i=0;
            }
            j++;
            
        }
        

        else if(j>=408&&j<=509)
        {
            geography[i]="";
            geography[i].append(line);
            
            geographyp[i]="";
            geographyp[i].append(people); 
            i++;
            if(i==102)
            {
            i=0;
            }
            j++;
            
        }
       

        else if(j>=510&&j<=611)
        {
            history[i]="";
            history[i].append(line);
            
            historyp[i]="";
            historyp[i].append(people); 
            i++;
             if(i==102)
            {
            i=0;
            }
            j++;
            
        }
       


        else if(j>=612&&j<=713)
        {
            matha[i]="";
            matha[i].append(line);
            
             mathap[i]="";
            mathap[i].append(people); i++;
             if(i==102)
            {
            i=0;
            }
            j++;
            
        }
       

        else if(j>=714&&j<=815)
        {
            mathb[i]="";
            mathb[i].append(line);
            
            mathbp[i]="";
            mathbp[i].append(people); i++;
             if(i==102)
            {
            i=0;
            }
            j++;
            
        }
        



        else if(j>=816&&j<=917)
        {
            physics[i]="";
            physics[i].append(line);
            
            physicsp[i]="";
            physicsp[i].append(people); 
            i++;
             if(i==102)
            {
            i=0;
            }
            j++;
            
        }
        

        else if(j>=918&&j<=1019)
        {
            society[i]="";
            society[i].append(line);
           
            societyp[i]="";
            societyp[i].append(people); 
            
            i++;
             if(i==102)
            {
            i=0;
            }
            j++;
            
             
            
        }
        

    biology[0]="biology";
    chinese[0]="chinese";
    chemistry[0]="chemistry";
    english[0]="english";
    geography[0]="geography";
    history[0]="history";
    matha[0]="matha";
    mathb[0]="mathb";
    physics[0]="physics";
    society[0]="society";
        
        
        
       
    }

    for(i=1;i<102;i++)
    {
        float a=(float)stof(chemistryp[i]);
         for(int z=2;z<102;z++)
            {
                float b=(float)stof(chinesep[z]);
                if(a==b)
                {
                    chemistryo[i]=stof(chinese[z]);
                    break;
                }
                else if(a<b)
                {
                    float temp1,temp2,temp3;
                    temp1=(float)stof(chinese[z]);
                    temp2=(float)stof(chinese[z-1]);
                    temp3=(float)stof(chinesep[z-1]);
                    chemistryo[i]=(float)(temp1+temp2)/2;
                    chemistryo[i]=((float)((b-a)*temp2)+(float)(temp1*(a-temp3)))/((float)((b-temp3)));
                    
                    break;

                }
            }
    }

     for(i=1;i<102;i++)
    {
        float a=(float)stof(biologyp[i]);
         for(int z=2;z<102;z++)
            {
                float b=(float)stof(chinesep[z]);
                if(a==b)
                {
                    biologyo[i]=stof(chinese[z]);
                    break;
                }
                else if(a<b)
                {
                    float temp1,temp2,temp3;
                    temp1=(float)stof(chinese[z]);
                    temp2=(float)stof(chinese[z-1]);
                    temp3=(float)stof(chinesep[z-1]);
                    biologyo[i]=((float)((b-a)*temp2)+(float)(temp1*(a-temp3)))/((float)((b-temp3)));
                     
                    
                   
                    break;

                }
            }
    }


      for(i=1;i<102;i++)
    {
        float a=(float)stof(englishp[i]);
       
         for(int z=2;z<102;z++)
            {
                float b=(float)stof(chinesep[z]);
                
                if(a==b)
                {
                    englisho[i]=stof(chinese[z]);
                    break;
                }
                else if(a<b)
                {
                    float temp1,temp2,temp3;
                    temp1=(float)stof(chinese[z]);
                    temp2=(float)stof(chinese[z-1]);
                    temp3=(float)stof(chinesep[z-1]);
                    englisho[i]=((float)((b-a)*temp2)+(float)(temp1*(a-temp3)))/((float)((b-temp3)));
                     
                    
                   
                    break;

                }
            }
    }



     for(i=1;i<102;i++)
    {
        float a=(float)stof(geographyp[i]);
         for(int z=2;z<102;z++)
            {
                float b=(float)stof(chinesep[z]);
                if(a==b)
                {
                    geographyo[i]=stof(chinese[z]);
                    break;
                }
                else if(a<b)
                {
                    float temp1,temp2,temp3;
                    temp1=(float)stof(chinese[z]);
                    temp2=(float)stof(chinese[z-1]);
                    temp3=(float)stof(chinesep[z-1]);
                    geographyo[i]=((float)((b-a)*temp2)+(float)(temp1*(a-temp3)))/((float)((b-temp3)));
                   
                    break;

                }
            }
    }



    for(i=1;i<102;i++)
    {
        float a=(float)stof(historyp[i]);
        
         for(int z=2;z<102;z++)
            {
                float b=(float)stof(chinesep[z]);
                if(a==b)
                {
                    historyo[i]=stof(chinese[z]);
                    break;
                }
                else if(a<b)
                {
                    float temp1,temp2,temp3;
                    temp1=(float)stof(chinese[z]);
                    temp2=(float)stof(chinese[z-1]);
                    temp3=(float)stof(chinesep[z-1]);
                    historyo[i]=((float)((b-a)*temp2)+(float)(temp1*(a-temp3)))/((float)((b-temp3)));
                   
                    break;

                }
            }
    }



    for(i=1;i<102;i++)
    {
        float a=(float)stof(mathap[i]);
         for(int z=2;z<102;z++)
            {
                float b=(float)stof(chinesep[z]);
                if(a==b)
                {
                   mathao[i]=stof(chinese[z]);
                    break;
                }
                else if(a<b)
                {
                    float temp1,temp2,temp3;
                    temp1=(float)stof(chinese[z]);
                    temp2=(float)stof(chinese[z-1]);
                    temp3=(float)stof(chinesep[z-1]);
                    mathao[i]=((float)((b-a)*temp2)+(float)(temp1*(a-temp3)))/((float)((b-temp3)));
                   
                    break;

                }
            }
    }


    for(i=1;i<102;i++)
    {
        float a=(float)stof(mathbp[i]);
         for(int z=2;z<102;z++)
            {
                float b=(float)stof(chinesep[z]);
                if(a==b)
                {
                    mathbo[i]=stof(chinese[z]);
                    break;
                }
                else if(a<b)
                {
                    float temp1,temp2,temp3;
                    temp1=(float)stof(chinese[z]);
                    temp2=(float)stof(chinese[z-1]);
                    temp3=(float)stof(chinesep[z-1]);
                    mathbo[i]=((float)((b-a)*temp2)+(float)(temp1*(a-temp3)))/((float)((b-temp3)));
                   
                    break;

                }
            }
    }


    for(i=1;i<102;i++)
    {
        float a=(float)stof(physicsp[i]);
         for(int z=2;z<102;z++)
            {
                float b=(float)stof(chinesep[z]);
                if(a==b)
                {
                    physicso[i]=stof(chinese[z]);
                    break;
                }
                else if(a<b)
                {
                    float temp1,temp2,temp3;
                    temp1=(float)stof(chinese[z]);
                    temp2=(float)stof(chinese[z-1]);
                    temp3=(float)stof(chinesep[z-1]);
                    physicso[i]=((float)((b-a)*temp2)+(float)(temp1*(a-temp3)))/((float)((b-temp3)));
                   
                    break;

                }
            }
    }



    for(i=1;i<102;i++)
    {
        float a=(float)stof(societyp[i]);
         for(int z=2;z<102;z++)
            {
                float b=(float)stof(chinesep[z]);
                if(a==b)
                {
                    societyo[i]=stof(chinese[z]);
                    break;
                }
                else if(a<b)
                {
                    float temp1,temp2,temp3;
                    temp1=(float)stof(chinese[z]);//70
                    temp2=(float)stof(chinese[z-1]);//71
                    temp3=(float)stof(chinesep[z-1]);
                    societyo[i]=((float)((b-a)*temp2)+(float)(temp1*(a-temp3)))/((float)((b-temp3)));
                   
                    break;

                }
            }
    }
    myfile.close();
    int z=0;
    float newa[11];
    float temp;
    int x;
    ifstream rank;
   
   rank.open("weight_ast.csv");
    float now;
    float suma[11];
    float tempa[11];
    while(rank.good())
    {

        string a,b,	year,chinese1,english1,mathA1,	mathB1,	physics1,chemistry1,biology1,history1,	geography1,citizen,average;

      
        getline(rank,a,',');
        getline(rank,b,',');
        getline(rank,year,',');
        getline(rank,chinese1,',');
        getline(rank,english1,',');
        getline(rank,mathA1,',');
        getline(rank,mathB1,',');
        getline(rank,physics1,',');
        getline(rank,chemistry1,',');
        getline(rank,biology1,',');
        getline(rank,history1,',');
        getline(rank,geography1,',');
        getline(rank,citizen,',');
        
        getline(rank,average,'\n');
       
       
            university[z]="";
            university[z].append(a);
            subject[z]="";
            subject[z].append(b);
            year1[z]="";
            year1[z].append(year);
            chineser[z]="";
            chineser[z].append(chinese1);
            englishr[z]="";
             englishr[z].append(english1);
            mathar[z]="";
            mathar[z].append(mathA1);
            mathbr[z]="";
             mathbr[z].append(mathB1);
            physicsr[z]="";
             physicsr[z].append(physics1);
            chemistryr[z]="";
            chemistryr[z].append(chemistry1);
            biologyr[z]="";
            biologyr[z].append(biology1);
            historyr[z]="";
             historyr[z].append(history1);
            geographyr[z]="";
            geographyr[z].append(geography1);
            citizenr[z]="";
            citizenr[z].append(citizen);
            averager[z]="";
            averager[z].append(average);
            float temp1;
            float sum=0;
            temp=0;
            if(z>0&&(averager[z]!=""))
            { 
                now=(float)stof(averager[z]);
                    if(chineser[z]!="NULL")
                    {
                        temp+=(float)stof(chineser[z]);
                        
                         cout<<now<<" ";
                        sum+=now*((float)stof(chineser[z]));
                        
                    }


                 for(j=1;j<102;j++)
                {
                if(stof(english[j])<=now)
                {
                    if(englishr[z]=="NULL")
                    break;
                     
                    else{
                        float a,b,c,d,e;
                        a=stof(english[j]);
                        b=stof(english[j-1]);
                        d=now;
                        c=englisho[j];
                        e=englisho[j-1];
                        
                        temp+=(float)stof(englishr[z]); 

                        temp1=(c*(b-d)+e*(d-a))/(b-a);
                        cout<<temp1<<" ";
                        sum+=temp1*(float)stof(englishr[z]);
                        
                        break;
                    }
                    }
                }
                 for(j=1;j<102;j++)
            {
                if(mathao[j]<=now)
                {
                    if(mathar[z]=="NULL")
                    break;
                    
                    else{
                        float a,b,c,d,e;
                        a=stof(matha[j]);
                        b=stof(matha[j-1]);
                        d=now;
                        c=mathao[j];
                        e=mathao[j-1];
                        temp+=(float)stof(mathar[z]); 
                        temp1=(c*(b-d)+e*(d-a))/(b-a);
                        sum+=temp1*(float)stof(mathar[z]);
                        break;
                    }
                }
            }
            for(j=1;j<102;j++)
            {
                if(mathbo[j]<=now)
                {
                    if(mathbr[z]=="NULL")
                    break;
                    
                    else{
                        float a,b,c,d,e;
                        a=stof(mathb[j]);
                        b=stof(mathb[j-1]);
                        d=now;
                        c=mathbo[j];
                        e=mathbo[j-1];
                        temp+=(float)stof(mathbr[z]); 
                        temp1=(c*(b-d)+e*(d-a))/(b-a);
                        sum+=temp1*(float)stof(mathbr[z]);
                        break;
                    }
                }
            }
             for(j=1;j<102;j++)
            {
                if(physicso[j]<=now)
                {
                    if(physicsr[z]=="NULL")
                    break;
                    
                    else{
                         float a,b,c,d,e;
                        a=stof(physics[j]);
                        b=stof(physics[j-1]);
                        d=now;
                        c=physicso[j];
                        e=physicso[j-1];
                        temp+=(float)stof(physicsr[z]); 
                        temp1=(c*(b-d)+e*(d-a))/(b-a);
                        sum+=temp1*(float)stof(physicsr[z]);
                        break;
                    }
                }
            }
             for(j=1;j<102;j++)
            {
                if(chemistryo[j]<=now)
                {
                    if(chemistryr[z]=="NULL")
                    break;
                   
                    else{
                        float a,b,c,d,e;
                        a=stof(chemistry[j]);
                        b=stof(chemistry[j-1]);
                        d=now;
                        c=chemistryo[j];
                        e=chemistryo[j-1];
                        temp+=(float)stof(chemistryr[z]); 
                        temp1=(c*(b-d)+e*(d-a))/(b-a);
                        sum+=temp1*(float)stof(chemistryr[z]);
                        break;
                    }
                }
            }
            for(j=1;j<102;j++)
            {
                if(biologyo[j]<=now)
                {
                    if(biologyr[z]=="NULL")
                    break;
                   
                    else{
                        float a,b,c,d,e;
                        a=stof(biology[j]);
                        b=stof(biology[j-1]);
                        d=now;
                        c=biologyo[j];
                        e=biologyo[j-1];
                        temp+=(float)stof(biologyr[z]); 
                        temp1=(c*(b-d)+e*(d-a))/(b-a);
                        sum+=temp1*(float)stof(biologyr[z]);
                        break;
                    }
                }
            }
            for(j=1;j<102;j++)
            {
                if(historyo[j]<=now)
                {
                    if(historyr[z]=="NULL")
                    break;
                    
                    else{
                        float a,b,c,d,e;
                        a=stof(history[j]);
                        b=stof(history[j-1]);
                        d=now;
                        c=historyo[j];
                        e=historyo[j-1];
                        temp+=(float)stof(historyr[z]); 
                        temp1=(c*(b-d)+e*(d-a))/(b-a);
                        cout<<temp1<<" ";
                        sum+=temp1*(float)stof(historyr[z]);
                        break;
                    }
                }
            }
            for(j=1;j<102;j++)
            {
                if(geographyo[j]<=now)
                {
                    if(geographyr[z]=="NULL")
                    break;
                   
                    else{
                        float a,b,c,d,e;
                        a=stof(geography[j]);
                        b=stof(geography[j-1]);
                        d=now;
                        c=geographyo[j];
                        e=geographyo[j-1];
                        temp+=(float)stof(geographyr[z]); 
                        temp1=(c*(b-d)+e*(d-a))/(b-a);
                        cout<<temp1<<" ";
                        sum+=temp1*(float)stof(geographyr[z]);
                        break;
                    }
                }
            }
            for(j=1;j<102;j++)
            {
                if(societyo[j]<=now)
                {
                    if(citizenr[z]=="NULL")
                    break;
                   
                    else{
                         float a,b,c,d,e;
                        a=stof(society[j]);
                        b=stof(society[j-1]);
                        d=now;
                        c=societyo[j];
                        e=societyo[j-1];
                        temp+=(float)stof(citizenr[z]); 
                          temp1=(c*(b-d)+e*(d-a))/(b-a);
                        sum+=temp1*(float)stof(citizenr[z]);
                        break;
                    }
                }
            }

                cout<<subject[z]<<endl;
                tempa[z]=temp;
               suma[z]=sum;
              newa[z]=sum/temp;
            
            z++;
            }
            else
            z++;
            
           
            
        }
    
        

       
        
        
        
       
    

    
    int num=z;
    
    ofstream outfil;
    
    string change;
    outfil.open("rank.csv");
    for(i=1;i<num-1;i++)
        for(j=1;j<num-2;j++)
        {
            if(newa[j]<newa[j+1])
            {
                
                change=university[j];
                university[j]=university[j+1];
                university[j+1]=change;
                
                change=subject[j];
                subject[j]=subject[j+1];
                subject[j+1]=change;

                change=chineser[j];
                chineser[j]=chineser[j+1];
                chineser[j+1]=change;

                 change=englishr[j];
                englishr[j]=englishr[j+1];
                englishr[j+1]=change;

                change=mathar[j];
                mathar[j]=mathar[j+1];
                mathar[j+1]=change;

                change=mathbr[j];
                mathbr[j]=mathbr[j+1];
                mathbr[j+1]=change;

                change=physicsr[j];
                physicsr[j]=physicsr[j+1];
                physicsr[j+1]=change;

                change=chemistryr[j];
                chemistryr[j]=chemistryr[j+1];
                chemistryr[j+1]=change;

                change=biologyr[j];
                biologyr[j]=biologyr[j+1];
                biologyr[j+1]=change;

                change=historyr[j];
                historyr[j]=historyr[j+1];
                historyr[j+1]=change;

                change=geographyr[j];
                geographyr[j]=geographyr[j+1];
                geographyr[j+1]=change;

                change=citizenr[j];
                citizenr[j]=citizenr[j+1];
                citizenr[j+1]=change;

                change=averager[j];
                averager[j]=averager[j+1];
                averager[j+1]=change;

                float kk;
                kk=newa[j];
                newa[j]=newa[j+1];
                newa[j+1]=kk;
            }
        }

    
    for(i=0;i<num;i++)
    {
        outfil<<university[i]<<","<<subject[i]<<","<<year1[i]<<","<<chineser[i]<<","<<englishr[i]<<","<<mathar[i]<<","<<mathbr[i]<<","<<physicsr[i]<<","<<chemistryr[i]<<","<<biologyr[i]<<","<<historyr[i]<<","<<geographyr[i]<<","<<citizenr[i]<<","<<averager[i]<<","<<newa[i]<<endl;
    }
    outfil.close();
    ofstream outfile;
    outfile.open("test3.csv");

    for(i=0;i<102;i++)
    {
        outfile<<biology[i]<<","<<biologyp[i]<<","<<biologyo[i]<<endl;
    }
     for(i=0;i<102;i++)
    {
        outfile<<chemistry[i]<<","<<chemistryp[i]<<","<<chemistryo[i]<<endl;
    }

    for(i=0;i<102;i++)
    {
        outfile<<english[i]<<","<<englishp[i]<<","<<englisho[i]<<endl;
    }

    for(i=0;i<102;i++)
    {
        outfile<<geography[i]<<","<<geographyp[i]<<","<<geographyo[i]<<endl;
    }

    for(i=0;i<102;i++)
    {
        outfile<<history[i]<<","<<historyp[i]<<","<<historyo[i]<<endl;
    }
    for(i=0;i<102;i++)
    {
        outfile<<matha[i]<<","<<mathap[i]<<","<<mathao[i]<<endl;
    }

     for(i=0;i<102;i++)
    {
        outfile<<mathb[i]<<","<<mathbp[i]<<","<<mathbo[i]<<endl;
    }

     for(i=0;i<102;i++)
    {
        outfile<<physics[i]<<","<<physicsp[i]<<","<<physicso[i]<<endl;
    }

     for(i=0;i<102;i++)
    {
        outfile<<society[i]<<","<<societyp[i]<<","<<societyo[i]<<endl;
    }
   
   

     
}