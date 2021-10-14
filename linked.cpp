#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,ans,ch,size,c,sb,cb,start,temp;
	cout<<"Enter memory size : ";
	cin>>n;
	int memory[n][2];
	for(i=0;i<n;++i){
		memory[i][0] = 0;
		memory[i][1] = -1;
	}
	do{
		cout<<"1. Add File"<<endl;
		cout<<"2. Delete File"<<endl;
		cout<<"Enter ans : "<<endl;
		cin>>ans;
		switch(ans){
			case 1 : {
				cout<<"Enter size of file : ";
				cin>>size;
				c=0;
				sb=0;
				for(i=0;i<n && c<size;++i)
					if(memory[i][0] == 0){
						if(c==0)
							sb = i;
							c++;
					}
				if(c == size){
					cb = sb;
					memory[cb][0] = 2;
					c=1;
					for(i=sb;i<n && c<size;++i){
						if(memory[i][0] == 0){
							memory[cb][1] = i;
							cb = i;
							memory[cb][0] = 1;
							c++;
						}
					}
					memory[cb][1] = -2;
					for(i=0;i<n;++i)
						cout<<memory[i][0]<<" "<<memory[i][1]<<endl;
				}
				else{
					cout<<"No space left "<<endl;
				}
			}
			break;
			case 2 : {
				cout<<"Enter the starting index of the block to be deleted : ";
				cin>>start;
				if(memory[start][0] != 2)
					cout<<"Invalid start block"<<endl;
				else{
					cb = start;
					while(memory[cb][1] != -2){
						memory[cb][0] = 0;
						temp = memory[cb][1];
						memory[cb][1] = -1;
						cb = temp;
					}
					memory[cb][0] = 0;
					memory[cb][1] = -1;
					for(i=0;i<n;++i)
						cout<<memory[i][0]<<" "<<memory[i][1]<<endl;
				}
			}
			break;
			default : {cout<<"Wrong ans!";} 
		}
		cout<<"Do you want to add or delete more files?:(1 for Y and 0 for N) ";
		cin>>ch;
	}while(ch == 1);
}
