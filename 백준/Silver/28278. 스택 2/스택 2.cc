#include <iostream>
#include <stack>


using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int i;
    int x; //스택에 넣을 정수 x
    int op;

    stack<int>st;

    cin>>n; //명령의 수 입력
    
    for(i = 0; i<n; i++){
        cin>>op;

        switch(op){
            case 1 :
                cin>>x;
                st.push(x);
                break;
            case 2 :
                if(st.empty()==1){
                    cout<<"-1\n";
                    break;
                }
                cout<<st.top()<<"\n";
                st.pop();
                break;
            case 3 :
                cout<<st.size()<<"\n";
                break;
            case 4 :
                cout<<st.empty()<<"\n";
                break;
            case 5 :
                if(st.empty()==1){
                    cout<<"-1\n";
                    break;
                }
                cout<<st.top()<<"\n";    
                break;    
            default :
                break;
        }
        

    }
    return 0;

}