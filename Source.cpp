#include<iostream>
#include"Point.h"
#include"Polygon.h"
#include"Triangle.h"
#include"TimeClass.h"

using namespace std;
void PointSelector(Point A)
{
    cout << " Enter data required : ";
    A.enter();
    while (1)
    {
        cout << "\nChoose action : ";
        cout << "\n 0.Exit.";
        cout << "\n 1.Re-enter.";
        cout << "\n 2.Translate.";
        cout << "\n 3.Rotate.";
        int selector;
        cout << "\nyour number : ";
        cin >> selector;
        switch (selector)
        {
        case 0: return;
        case 1:
        {
            A.enter();
            A.display();
            break;
        }
        case 2:
        {
            double dx, dy;
            cout << " Enter dx and dy : ";
            cin >> dx >> dy;
            A.translate(dx, dy);
            A.display();
            break;
        }
        case 3:
        {
            double rad;
            cout << " Enter rad : ";
            cin >> rad;
            A.rotate(rad);
            A.display();
            break;
        }
        }
           
    }
}
void TriangleSelector(Triangle A)
{
    cout << " Enter required data of a triangle : ";
    A.enter();
    while (1)
    {
        cout << "\nChoose an action : ";
        int selector;
        cout << " \n 1. Re-enter .";
        cout << " \n 2. Translate .";
        cout << " \n 3. Zoom In.";
        cout << " \n 4. Zoom Out.";
        cout << " \n 0. Exit.";
        cout << "\n your number : ";
        cin >> selector;
        switch (selector)
        {
        case 0: return;
        case 1 : 
        {
            A.enter();
            A.display();
            break;
        }
        case 2: {
            cout << "\n Enter dx and dy : ";
            double dx, dy;
            cin >> dx >> dy;
            A.translate(dx, dy);
            A.display();
            break;
        }
        case 3: {
            cout << "\n How much large to zoom in:";
            double s;
            cin >> s;
            A.zoomIn(s);
            A.display();
            break;
        }
        case 4: {
            cout << "\n How much large to zoom  out:";
            double s;
            cin >> s;
            A.zoomOut(s);
            A.display();
            break;
        }
        }
    }
}
void PolygonSelector(Polygon A)
{
    int selector;
    cout << " Enter data of polygon : ";
    A.enter();
    cout << " Initialized successfully.";
    cout << " Default value : ";
    A.display();
    while (1)
    {

        cout << "\nChoose an action : ";
        cout << "\n 1. Translate.";
        cout << "\n 2. Zoom In. ";
        cout << "\n 3. Zoom Out. ";
        cout << "\n 4. Re-enter. ";
        cout << "\n 0. Exit.";

        cout << "\nyour number : ";
        cin >> selector;
        switch (selector)
        {
        case 0: return;
        case 1: {
            double dx;
            double dy;
            cout << "\n Enter dx and dy : ";
            cin >> dx >> dy;
            A.translate(dx, dy);
            A.display();
            break;
        }
        case 2: {
            double k;
            cout << "\n How much large u want to zoom in : ";
            cin >> k;
            A.zoomIn(k);
            A.display();
            break;
        }
        case 3: {
            double k;
            cout << "\n How much large u want to zoom out : ";
            cin >> k;
            A.zoomOut(k);
            A.display();
            break;
        }
        case 4: {
            A.enter();
            A.display();
            break;
        }
        }

    }
}
void TimeSelector(TimeClass A)
{
    cout << "\nEnter required data : ";
    A.enter();
    while (1)
    {
        cout << "\nChoose an action : ";
        cout << "\n 0. Exit.";
        cout << "\n 1. Re-enter.";
        cout << "\n 2. Add Seconds.";
        cout << "\n 3. Add Minutes.";
        cout << "\n 4. Add Hours. ";
        cout << "\nyour number :";
        int selector;
        cin >> selector;
        switch (selector)
        {
        case 0: return;
        case 1: {
            A.enter();
            A.display();
            break;

        }
        case 2: {
            cout << " Enter second to add : ";
            int sec;
            cin >> sec;
            A.addSecond(sec);
            A.display();
            break;
        }
        case 3: {
            cout << " Enter minutes to add : ";
            int sec;
            cin >> sec;
            A.addMinutes(sec);
            A.display();
            break;
        }
        case 4: {
            cout << " Enter hour to add : ";
            int sec;
            cin >> sec;
            A.addHour(sec);
            A.display();
            break;
        }
        }
    }
}
void MainSelector(Point A, Triangle B, Polygon C, TimeClass D)
{
    int selector;
    while (1)
    {
        cout << " Choose object to operate : ";
        cout << "\n0. Exit the program.";
        cout << "\n1.Point.";
        cout << "\n2.Triangle.";
        cout << "\n3.Polygon.";
        cout << "\n4.Time.";
        cout << "\n Your number : ";
        cin >> selector;

        switch (selector)
        {
        case 0: return;
        case 1: { PointSelector(A); break; }
        case 2: { TriangleSelector(B); break; }
        case 3: { PolygonSelector(C); break; }
        case 4: { TimeSelector(D); break; }
        }
    }

}
int main()
{
    Point A;
    Triangle B;
    Polygon C;
    TimeClass D;
    MainSelector(A, B, C, D);

}