#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int n;
	cout<<"NHap so luong phan tu: ";cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cout<<"NHap phan tu thu "<<(i+1)<<": ";cin>>x;
		v.push_back(x);
	}
	cout<<"Danh sach ban nhap la: ";
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
	
	//in tu r-l
	for(auto it=v.begin()+r;it>=v.begin()+l;it--){
		cout<<*it<<" ";
	}
	cout<<endl;
	return 0;
	
	
}