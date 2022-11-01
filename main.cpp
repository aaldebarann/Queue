
#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
  Queue<int> q1;
  q1.push(1);
  q1.push(2);
  q1.push(7);
  q1.push(3);
  // now q1 is 1, 2, 3, 7
  while (q1.size() > 2) {
    cout << q1.top() << endl;
    q1.pop();
  }
  // now q1 is 3, 7
  q1.push(8);
  q1.push(9);
  while (!q1.empty()) {
    cout << q1.top() << endl;
    q1.pop();
  }
  // исключение - pop пустой очереди
  try {
    q1.pop();
  }
  catch (exception e) {
    cout << e.what() << endl;
  }
  // исключение - push в заполненную очередь
  try {
    for (int i = 0; i < q1.MAX_SIZE + 10; i++)
      q1.push(1);
  }
  catch (exception e) {
    cout << e.what() << endl;
  }
  
}
