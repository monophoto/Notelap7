#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

string Palindrome(string x, string y){
	if(x == y){
			return "Yes";
		}else{
			return "No";
		}
	}
	
int main(){
	string text;
    cout << "Input text: ";
	cin >> text;
	string retext = func1(text);
    cout << "Reversed text: " << retext << endl;
	string T1 = func3(text);
	string T2 = func3(retext);
    cout << "Palindrome: " << Palindrome(T1, T2);
    return 0;
}
