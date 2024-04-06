#include <iostream>
#include <stack>


using namespace std; 


int main(){
    stack<int> temp;
 stack<int> test; 
test.push(10);
test.push(15);
test.push(17);

while(!test.empty())
{
    cout<<test.top()<<endl;
    test.pop();
}

test.emplace(3);

while(!test.empty())
{
    cout<<test.top()<<endl;
    test.pop();
}
}