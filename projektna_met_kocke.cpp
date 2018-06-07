#include <iostream>
#include <cstdlib>// knjižnica za delo z nakljuènimi števili
#include <ctime> // knjižnica za delo s èasom 

using namespace std;

int main()
{
    srand(time(0));     /* inicializacija zaèetne vrednosti generatorja */
    int met = 100, a, b, c, st1 = 0, st2 = 0, st3 = 0, st4 = 0, st5 = 0, st6 = 0;

    cout << "Imate 100 metov ter kocko, ki ima najvec 6 pik. "<<endl;
    do
    {
        do
        {
            cout << "Koliko pik zelite zadeti (1-6): ";
            cin >> a;
        } while (a < 1 || a > 6);

        c = 0;
        do
        {
            if (a==1)
                st1++;
            else if (a==2)
                st2++;
            else if (a==3)
                st3++;
            else if (a==4)
                st4++;
            else if (a==5)
                st5++;
            else
                st6++;
            b = rand() % 6 + 1;		/* nakljuèno število med 1 in 6 */
            met--;
        	c++;
        } while (b != a && met > 0);
        if (a != b && met == 0)
            cout << "Zal vam je zmanjkalo metov preden ste ste dobili zeljeno vrednost. " << endl<<endl;
			
        else
        {
            cout << "Kocko ste vrgli " << c << " krat, preden se je obrnilo " << a << " pik." << endl;
            cout << "Imate se " << met << " metov." << endl;
        }

    } while (met != 0);

    if (st1 != 0)
        cout << "Za vrednost 1 ste porabili " << st1 << " metov." << endl;
    if (st2 != 0)
        cout << "Za vrednost 2 ste porabili " << st2 << " metov." << endl;
    if (st3 != 0)
        cout << "Za vrednost 3 ste porabili " << st3 << " metov." << endl;
    if (st4 != 0)
        cout << "Za vrednost 4 ste porabili " << st4 << " metov." << endl;
    if (st5 != 0)
        cout << "Za vrednost 5 ste porabili " << st5 << " metov." << endl;
    if (st6 != 0)
        cout << "Za vrednost 6 ste porabili " << st6 << " metov." << endl;

    return 0;
}
