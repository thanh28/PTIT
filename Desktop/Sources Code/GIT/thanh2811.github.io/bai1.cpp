#include <bits/stdc++.h>
using namespace std;
typedef multimap<int, int> MapType;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int N;
		cin>>N;
		int a[N+1];
		for(int i=0;i<N;i++) cin>>a[i];
		
		map<int,int> mp; //Map uses the first id as the array element and second as the count of occurences of the element
		
		for(int i=0;i<N;i++)
		{
			if(mp.find(a[i])!=mp.end()) //if the array element is present then just increase the count of occurence of it by 1
				mp[a[i]]++;
			else
				mp[a[i]]=1; //if the array element is not present in the map already then add it
		}
		
			multimap<int,int> mp2; // it maintains specific order and count  and while inserting makes it sorted
		
		map<int,int>::iterator it;
		for(it=mp.begin();it!=mp.end();it++)
		mp2.insert(MapType::value_type(it->second,it->first)); //Second becomes the key as we need to sort according to frequency.
		
		map<int,int>::reverse_iterator itr;
		for(itr=mp2.rbegin();itr!=mp2.rend();itr++)
		{
			//Reverse the multimap and print so that it prints in decreasing order.
			for(int i=0;i<itr->first;i++)
				cout<<itr->second<<" ";
		}
		cout<<endl;
	}	
    return 0;
}