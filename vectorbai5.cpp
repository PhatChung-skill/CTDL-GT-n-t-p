#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int n;
	cout<<"Nhap so luong phan tu: ";cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cout<<"Nhap phan tu thu "<<(i+1)<<": ";cin>>x;
		v.push_back(x);
	}
	cout<<"Danh sach ban vua nhap la: ";
	for(int x:v){
		cout<<x<<" ";
	}
	cout<<endl;
	
	int l,r;
	cin>>l>>r;
	
	//in tu l-r
	for(auto it=v.begin()+l;it<=v.begin()+r;it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	
	//lat nguoc vector tu chi so l-r
	reverse(v.begin()+l,v.begin()+r+1);
	for(auto it=v.begin()+l;it<=v.begin()+r;it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	
	//lat nguoc vector
	reverse(v.begin(),v.end());
	cout<<"Danh sach sau khi lat nguoc la: ";
	for(int x:v){
		cout<<x<<" ";
	}
	return 0;	
	
}