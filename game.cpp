#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
class Villain
{
    string name, rank;
    string YNAN[3]; // YNAN or Ynan = yochiro normal attack name
    string YUAN[4]; // YUAN or Yuan = yochiro ultimate attack name

public:
    int vhealth;
    int vdamage;
    void setDetails(string name, string rank)
    {
        this->name = name;
        this->rank = rank;
    }

    void getDetails()
    {
        cout << "The Name Of The Villain Is: " << name << endl;
        cout << "The Rank Of The Villain Is: " << rank << endl;
    }

    void setvHealth(int vhealth)
    {
        this->vhealth = vhealth;
    }

    void getvHealth()
    {
        cout << "The Health Of The Villain Is: " << vhealth << endl;
    }

    void setYnan()
    {
        // sa = simple attack
        YNAN[0] = "sa";
        YNAN[1] = "slice";
        YNAN[2] = "energy";
    }
    void setYuan()
    {
        // dns = defencing and attacking slash
        YUAN[0] = "dnas";
        YUAN[1] = "world slash";
        YUAN[2] = "slash prision";
        YUAN[3] = "soul slash";
    }
    void getYnan()
    {

        int y = rand() % 3;
        string vattack = YNAN[y];
        // cout << "the choosen number is: " << y << endl;

        if (vattack == YNAN[0])
        {
            vdamage = 100;
            cout << "yochiro attack with damage of : " << vdamage << endl;
        }
        else if (vattack == YNAN[1])
        {
            vdamage = 200;
            cout << "yochiro attack with damage of : " << vdamage << endl;
        }
        else if (vattack == YNAN[2])
        {
            vdamage = 350;
            cout << "yochiro attack with damage of : " << vdamage << endl;
        }
        else
        {
            cout << " i think you choose wrong attack" << endl;
        }
    }

    void getYuan()

    {

        if (vhealth <= 5000 && vhealth >= 4500)
        {

            vdamage = 500;
            cout << "yochiro used attack: " << YUAN[0] << " with damage of: " << vdamage << endl;
        }

        else if (vhealth <= 4500 && vhealth >= 4000)
        {

            vdamage = 800;
            cout << "yochiro used attack: " << YUAN[1] << " with damage of: " << vdamage << endl;
        }

        else if (vhealth <= 4000 && vhealth >= 2500)
        {

            vdamage = 1150;
            cout << "yochiro used attack: " << YUAN[2] << " with damage of: " << vdamage << endl;
        }
        else if (vhealth <= 1000)
        {

            vdamage = 1500;
            cout << "yochiro used attack: " << YUAN[3] << " with damage of: " << vdamage << endl;
        }
        else
        {
            getYnan();
        }
    }

    void display()
    {
        setDetails("YOCHIRO", "CELUNAR");
        setvHealth(10000);
        getDetails();
        getvHealth();
    }
};

class Shushi : public Villain
{
    string attackname[6];
    int defence[4];

public:
    string attack;
    int health = 5000;
    int hdamage;

    void setdefence()
    {
        defence[0] = 50;
        defence[1] = 0;
        defence[2] = 75;
        defence[3] = 20;
    }

    void setattackname()
    {

        attackname[0] = "energy";
        attackname[1] = "slash";
        attackname[2] = "lighting";
        attackname[3] = "monster cloud";
        attackname[4] = "energy pressure";
        attackname[5] = "galaxy slash";
    }

    void getattackname()
    {

        this->attack = attack;

        while (health > 0)

        {
            cout << endl;
            cout << endl;
            cout << "Available Attack" << endl
                 << "energy" << endl
                 << "slash" << endl
                 << "lighting" << endl
                 << "monster cloud" << endl
                 << "energy Pressure" << endl
                 << "galaxy slash" << endl
                 << "Enter The Attack Name: ";
            getline(cin, attack);
            cout << endl;
            getYuan();

            bool validattack = false;

            for (int i = 0; i < sizeof(attackname) / sizeof(attackname[0]); i++)
            {
                if (attack == attackname[i])
                {
                    validattack = true;
                    break;
                }
            }

            int d = rand() % 4;
            int v = defence[d];

            if (validattack == true)
            {
                cout << "shushi defended yochiro attack, reducing damege: " << v << endl;
            }
            else
            {
                hdamage = 0;
                v = 0;
                // cout << "after wrong attack choose the defence is: " << v << endl;
                // cout << "the damage is done by shushi" << hdamage << endl;
            }

            int sh = health - (vdamage - v);

            // below is the condition of shushi damage.

            if (attack == attackname[0])
            {
                hdamage = 200;
                int h = vhealth - hdamage;

                if (h <= 0)
                {
                    cout << "Yochiro ---> AAAAAAA! i am dyingggggggggg " << endl;
                }

                if (sh <= 0)
                {
                    cout << "Shushi lost the battle against: " << endl
                         << "Name - YOCHIRO" << endl
                         << "Rank - CELUNAR" << endl;
                    break;
                }

                cout << "The Remaining Health Of Shushi Is: " << sh << endl;
                cout << endl;
                cout << "Shushi attack with damage of: " << hdamage << endl;
                cout << "The Remaining Health Of Yochiro Is: " << h << endl;
            }

            else if (attack == attackname[1])
            {
                hdamage = 350;
                int h = vhealth - hdamage;

                if (h <= 0)
                {
                    cout << "Yochiro ---> AAAAAAA! i am dyingggggggggg " << endl;
                }

                if (sh <= 0)
                {
                    cout << "Shushi lost the battle against: " << endl
                         << "Name - YOCHIRO" << endl
                         << "Rank - CELUNAR" << endl;
                    break;
                }
                cout << "The Remaining Health Of Shushi Is: " << sh << endl;
                cout << endl;
                cout << "Shushi attack with damage of: " << hdamage << endl;
                cout << "The Remaining Health Of Yochiro Is: " << h << endl;
            }

            else if (attack == attackname[2])
            {
                hdamage = 500;
                int h = vhealth - hdamage;

                if (h <= 0)
                {
                    cout << "Yochiro ---> AAAAAAA! i am dyingggggggggg " << endl;
                }

                if (sh <= 0)
                {
                    cout << "Shushi lost the battle against: " << endl
                         << "Name - YOCHIRO" << endl
                         << "Rank - CELUNAR" << endl;
                    break;
                }
                cout << "The Remaining Health Of Shushi Is: " << sh << endl;
                cout << endl;
                cout << "Shushi attack with damage of: " << hdamage << endl;
                cout << "The Remaining Health Of Yochiro Is: " << h << endl;
            }

            else if (attack == attackname[3])
            {

                hdamage = 650;
                int h = vhealth - hdamage;

                if (h <= 0)
                {
                    cout << "Yochiro ---> AAAAAAA! i am dyingggggggggg " << endl;
                }

                if (sh <= 0)
                {
                    cout << "Shushi lost the battle against: " << endl
                         << "Name - YOCHIRO" << endl
                         << "Rank - CELUNAR" << endl;
                    break;
                }
                cout << "The Remaining Health Of Shushi Is: " << sh << endl;
                cout << endl;
                cout << "Shushi attack with damage of: " << hdamage << endl;
                cout << "The Remaining Health Of Yochiro Is: " << h << endl;
            }

            else if (attack == attackname[4])
            {
                hdamage = 800;
                int h = vhealth - hdamage;

                if (h <= 0)
                {
                    cout << "Yochiro ---> AAAAAAA! i am dyingggggggggg " << endl;
                }

                if (sh <= 0)
                {
                    cout << "Shushi lost the battle against: " << endl
                         << "Name - YOCHIRO" << endl
                         << "Rank - CELUNAR" << endl;
                    break;
                }
                cout << "The Remaining Health Of Shushi Is: " << sh << endl;
                cout << endl;
                cout << "Shushi attack with damage of: " << hdamage << endl;
                cout << "The Remaining Health Of Yochiro Is: " << h << endl;
            }

            else if (attack == attackname[5])
            {

                hdamage = 1000;
                int h = vhealth - hdamage;

                if (h <= 0)
                {
                    cout << "Yochiro ---> AAAAAAA! i am dyingggggggggg " << endl;
                }

                if (sh <= 0)
                {
                    cout << "Shushi lost the battle against: " << endl
                         << "Name - YOCHIRO" << endl
                         << "Rank - CELUNAR" << endl;
                    break;
                }
                cout << "The Remaining Health Of Shushi Is: " << sh << endl;
                cout << endl;
                cout << "Shushi attack with damage of: " << hdamage << endl;
                cout << "The Remaining Health Of Yochiro Is: " << h << endl;
            }

            else
            {

                int h = vhealth - hdamage;

                if (sh <= 0)
                {
                    cout << "Shushi lost the battle against: " << endl
                         << "Name - YOCHIRO" << endl
                         << "Rank - CELUNAR" << endl;
                    break;
                }

                cout << "The Remaining Health Of Shushi Is: " << sh << endl;
                cout << "The Remaining Health Of Yochiro Is: " << h << endl;
                cout << endl;
                cout << "I Think, You MISS The Attack" << endl
                     << "Please Correct The Attack Name " << endl;
            }

            vhealth = vhealth - hdamage;
            health = health - (vdamage - v);
            // cout << "the health of the villain: " << vhealth << endl;
            // cout << "the health of the hero: " << health << endl;
        }
    }
};

int main()
{
    srand(time(0));
    // Villain vi;
    // vi.display();
    // vi.setYnan();
    // vi.setYuan();
    // vi.getYuan();

    Shushi s;
    s.display();
    s.setYnan();
    s.setYuan();
    s.setdefence();
    s.setattackname();
    s.getattackname();

    return 0;
}
