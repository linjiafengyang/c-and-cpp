#include <iostream>
using namespace std;
void TestObjects();
class Object {
public:
    Object(int i) {
        id = i;
        count++;
        cout<<"Object "<<id<<" is created, we've got "<<count<<" object(s) now!"<<endl;
    }
    ~Object() { 
        count--;
        cout<<"Object "<<id<<" is deleted, we've got "<<count<<" object(s) now!"<<endl;
    }
private:
    int id;
    static int count;
};
int Object::count = 0;
int main()
{
    TestObjects();
    return 0;
}
void TestObjects()
{
    Object *o1 = new Object(1); 
    Object *o2 = new Object(2);
    Object *o3 = new Object(3);
    o3->~Object();
    o2->~Object();
    Object *o4 = new Object(4);
    o4->~Object();
    o1->~Object();
}
