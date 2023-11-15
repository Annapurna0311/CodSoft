#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,roll;
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your Roll Number: ";
    cin>>roll;
    cout<<"Enter the total number of subjects: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Marks scored in each subject out of 100: ";
    for(int i=0;i<n;i++){
       cin>>v[i];
    }
    int sum=0;
    for(auto i:v){
        sum+=i;
    }
    int avg= sum/n;
    cout<<"Your final grade is";
    if(avg>=90){
        cout<<"CONGRATULATIONS you have been graded:  A+";
    }
    else if(avg<90 && avg>=80){
        cout<<"SUPERB you have got grade: A";
    }
    else if(avg<80 && avg>=70){
        cout<<"WELL DONE! you scored: B+";
    }
    else if(avg<70 && avg>=60){
        cout<<"You scored B";
    }
    else if(avg<60 && avg>=50){
        cout<<"KEEP TRYING because you got grade: C+";
    }
    else if(avg<50 && avg>=40){
        cout<<"WORK HARD . Grade is just : C";
    }
    else if(avg<40 && avg>=33){
        cout<<"GOOD LUCK you just passed with grade: D+";
    }
    else {
        cout<<"OOPS!! But Sorry you fail";
    }
    sort(v.begin(),v.end());
    cout<<endl;
    if(v.back()!=v.front()){
        cout<<"Your highest scored grade is : "<<v.back()<<endl;
        cout<<"Your lowest scored grade is: "<<v.front()<<endl;
    }
    else {
        cout<<"Your highest and lowest grade both are equal"<<v.front()<<endl;
    }

    
    
    return 0;
}
