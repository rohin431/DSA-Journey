#include<iostream>
#include<string>
using namespace std;
char getMaxOccCharacter(string s){
    int arr[26]={0};
    for(int i=0;i<s.size();i++){
        int num=0;
        if(s[i]>='a'&&s[i]<='z')
        num=s[i]-'a';
        if(s[i]>='A'&& s[i]<='Z')
        num=s[i]-'A';
        arr[num]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
        maxi=arr[i];
        }
    }
    if(maxi==1)return '0';
    return ('a'+ans);
}
int main(){
    string hell="loveunigga";
    char ch=getMaxOccCharacter(hell);
    cout<<ch<<endl;
    return 0;
}