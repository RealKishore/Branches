#include <iostream>
using namespace std;

int encryption(string str, int a)
{
	for(int i=0;i<str.length();i++){
		if(islower(str[i]) || isupper(str[i])){
			if(islower(str[i]) && (str[i]+a) >'z')
				str[i]='a'+(str[i]+a-'z'-1);
			else if(isupper(str[i]) && (str[i]+a) >'Z')
				str[i]='A'+(str[i]+a-'Z'-1);
			else
				str[i]=str[i]+a;
		}
		cout<<str[i];
	}
	cout<<"\n";
	return 0;
}
int decryption(string str, int a)
{
	for(int i=0;i<str.length();i++){
		if(islower(str[i]) || isupper(str[i])){
			if(islower(str[i]) && (str[i]-a) <'a')
				str[i]='z'-('a'-(str[i]-a)-1);
			else if(isupper(str[i]) && (str[i]-a) <'A')
				str[i]='Z'-('A'-(str[i]-a)-1);
			else
				str[i]=str[i]-a;
		}
		cout<<str[i];
	}
	cout<<"\n";
	return 0;
	
}
int main()
{
	int n,a;
	string s;
	cin>>n;
	cin>>a;
	for(int i=1;i<=n;i++) {
		getline (cin, s);
		encryption(s,a);
		
	}
	for(int i=1;i<=n;i++){
		getline (cin, s);
		decryption(s,a);
		
	}
	return 0;
}
