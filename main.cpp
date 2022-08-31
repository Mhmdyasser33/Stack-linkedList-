#include <bits/stdc++.h>
#include<utility>
#include<vector>
#include<set>
#include<set>
#include<unordered_set>
#include<unordered_map>
#define all(s) s.begin(),s.end()
#define allr(i) i.rbegin(),i.rend()
#define sz(s) (int)(s.size())
#define ceil(x,y) ((x+y-1)/y)
#define F first
#define S second
#define pb push_back
#define pop pop_back
#define vi vector<int>
#define si set<int>
#define uns unordered_set<int>
#define pq_max priority_queue<int>
#define pq_min priorrity_queue<int,pqi,greater<int>>
#define khaled_kasmeri ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef  long long ll;
typedef long double ld;
typedef  double dd;
using namespace std;
class stackLinked_list{
private :
    struct Node{
        int date ;
        Node * next ;

    };
    Node *top = NULL;
public :
    void push( int val){
        Node *newnode = new Node ;
        newnode->date = val ;
        if(top == NULL){
            newnode->next = NULL ;
            top = newnode ;
        }
        else{
        newnode->next = top ;
        top = newnode ;

        }

    }
    void pop(){
        if(is_Empty())
            return ;
        else{
    // to store element you want to delete
        Node *temp = top ;
        top = top->next ;
        delete temp;
        }

    }
    bool is_Empty(){
    if(top == NULL)
        return true;
    else
        return false;
    }
    int top_value(){
        if(is_Empty())
            return -1 ;
        else
            return top->date ;
    }

};
int main()
{
    khaled_kasmeri;
    system("color 02");
    stackLinked_list sli;
    int x ;
    cout << "Enter num of test case" << endl;
    cin >> x ;
    while( x-- ){
            int y ;
            cout << "Enter num " << endl;
           cin >> y ;
           sli.push(y) ;
    }
    while(!sli.is_Empty()){
        cout <<"The values in stack is " <<sli.top_value() << endl;
        sli.pop();
    }

}
