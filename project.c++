#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "Welcome to Our Services" << endl;
    cout << "1.Cox's Bazar." << endl;
    cout << "2.The Sundarbans." << endl;
    cout << "3.Bandarban." << endl;
    cout << "4.Sanit Martin" << endl;
    cout << "5.Kuakata" << endl;

    cout << "Please Select the Location : ";
    int location;
    cin >> location;

    switch (location)
    {
    case 1:

        cout << "Welcome Cox's Bazar " << endl;
        cout << "Please Check the Hotels Avaiable in Cox's Bazar. " << endl;
        cout << "1.Hotel Sea Crown." << endl;
        cout << "2.Hotel Sea Shine." << endl;
        cout << "3.Hotel Sea Cox's." << endl;
        cout << "4.Hotel Beach Hotel" << endl;

        cout << "Please Select the Hotel : ";
        int hotel;
        cin >> hotel;

        switch (hotel)
        {
        case 1:
        {
            cout << "Welcome Hotel Sea Crown " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Superior King Room : 3,307 taka." << endl;
            cout << "2.Duplex Douple Room With Sea View : 4,300 taka." << endl;
            cout << "3.Family Room : 3,638 taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 3307;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 4300;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 3638;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 2:
        {
            cout << "Welcome Hotel Sea Shine " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Standard Double Room  : 1,543  taka." << endl;
            cout << "2.Deluxe Double Room : 2,205  taka." << endl;
            cout << "3.Economy Quadruple Room : 2,205 taka." << endl;
            cout << "4.Deluxe Quadruple Room  : 2,646  taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 1543;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 2205;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 2205;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 4)
            {
                int cost = 2646;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 3:
        {
            cout << "Welcome Hotel Sea Cox's " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Deluxe Double Room : 2,425 taka." << endl;
            cout << "2.Deluxe Double Room with Balcony and Sea View : 3,087 taka." << endl;
            cout << "3.Duplex Quadruple Room : 3,087  taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 2425;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 3087;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 3087;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 4:
        {
            cout << "Welcome Long Beach Hotel " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Premier Twin Room : 5,557 taka." << endl;
            cout << "2.Premier Double Room  : 5,557  taka." << endl;
            cout << "3.Family Room : 5,953 taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 5557;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 5557;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 5953;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        }

        break;

        // Sundarbans

    case 2:

        cout << "Welcome to Sundarbans " << endl;
        cout << "Please Check the Hotels Avaiable in Cox's Bazar. " << endl;
        cout << "1.Hotel Castle Salam." << endl;
        cout << "2.City Inn." << endl;
        cout << "3.Jashore IT Park Hotel and Resort." << endl;
        cout << "4.Hotel Rose Garden" << endl;

        cout << "Please Select the Hotel : ";
        int hotl;
        cin >> hotl;

        switch (hotl)
        {
        case 1:
        {
            cout << "Welcome to Hotel Castle Salam " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Standard Single  : 2,465 taka." << endl;
            cout << "2.Superior Single : 4,295 taka." << endl;
            cout << "3.Superior Double : 5,420 taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 2465;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 4295;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 5420;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 2:
        {
            cout << "Welcome City Inn " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Duplex Single : 2,800  taka." << endl;
            cout << "2.Deluxe Family : 5,800  taka." << endl;
            cout << "3.Standard Single : 2,200 taka." << endl;
            cout << "4.Executive Suite  : 7,000  taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 2800;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 5800;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 2700;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 4)
            {
                int cost = 7000;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 3:
        {
            cout << "Welcome Jashore IT Park Hotel and Resort " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Standard Twin Room : 3,175 taka." << endl;
            cout << "2.Deluxe Studio : 4,961 taka." << endl;
            cout << "3.Deluxe Single Room : 2,977  taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 3175;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 4961;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 1977;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 4:
        {
            cout << "Welcome Hotel Rose Garden " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Deluxe Queen Room : 3,528 taka." << endl;
            cout << "2.Standard Twin Room  : 3,704  taka." << endl;
            cout << "3.Deluxe King Room : 3,969 taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 3528;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 3704;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 3969;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        }

        break;

        // Bandarban

    case 3:

        cout << "Welcome to Bandarban " << endl;
        cout << "Please Check the Hotels Avaiable in Cox's Bazar. " << endl;
        cout << "1.Hotel Hill View." << endl;
        cout << "2.Hill Crown Hotel & Resort." << endl;
        cout << "3.Bono Nibash Hill Resort." << endl;
        cout << "4.Bandor Hotel." << endl;

        cout << "Please Select the Hotel : ";
        int hotil;
        cin >> hotil;

        switch (hotil)
        {
        case 1:
        {
            cout << "Welcome to Hotel Hill View " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Deluxe Double Room : 2,481 taka." << endl;
            cout << "2.Executive Triple Room : 2,977 taka." << endl;
            cout << "3.King Room with Two King Beds : 3,175 taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 2481;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 2977;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 3175;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 2:
        {
            cout << "Welcome Hill Crown Hotel & Resort " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Standard Double Room  : 1,433  taka." << endl;
            cout << "2.Superior Double Room : 1,654  taka." << endl;
            cout << "3.Deluxe Double Room : 1,764 taka." << endl;
            cout << "4.Deluxe Quadruple Room  : 2,205  taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 1433;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 1654;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 1764;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 4)
            {
                int cost = 2205;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 3:
        {
            cout << "Welcome Bono Nibash Hill Resort " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Economy Double Room : 3,087 taka." << endl;
            cout << "2.Deluxe Double Room : 3,087 taka." << endl;
            cout << "3.Duplex Quadruple Room : 4,189  taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 3087;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 3087;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 4189;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 4:
        {
            cout << "Welcome TO Bandor Hotel" << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Double Room : 110,250 taka." << endl;
            cout << "2.Single Room  : 99,225  taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 110250;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 99225;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

        }
        break;
        }

        break;
        //  Saint Martin

    case 4:

        cout << "Welcome to Saint Martin " << endl;
        cout << "Please Check the Hotels Avaiable in Cox's Bazar. " << endl;
        cout << "1.Villa Jwi Lavi Boutique Hotel." << endl;
        cout << "2.Love Boutique Hotel." << endl;
        cout << "3.La Villa Hibiscus, Saint Martin." << endl;
        cout << "4.Le Martin Boutique Hôtel" << endl;

        cout << "Please Select the Hotel : ";
        int hotell;
        cin >> hotell;

        switch (hotell)
        {
        case 1:
        {
            cout << "Welcome to Villa Jwi Lavi Boutique Hotel " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Suite with Sea View : 4,307 taka." << endl;
            cout << "2.Suite with Terrace : 5,300 taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 4307;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 5300;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

        }
        break;
        case 2:
        {
            cout << "Welcome Love Boutique Hotel " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Double Room with Terrace  : 17,383  taka." << endl;
            cout << "2.Double Room with Sea View : 23,178  taka." << endl;
            cout << "3.Double Room with Balcony : 22,019 taka." << endl;
            cout << "4.Double Room with Sea View  : 27,813  taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 17383;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 17383;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 23178;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 4)
            {
                int cost = 27813;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 3:
        {
            cout << "Welcome La Villa Hibiscus, Saint Martin " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Standard King Rooms : 20,425 taka." << endl;
            cout << "2.Superior King Room : 30,087 taka." << endl;
            cout << "3.Deluxe Suite with Spa Bath : 30,087  taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 20425;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 30087;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 30087;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 4:
        {
            cout << "Welcome Le Martin Boutique Hôtel " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Premier Twin Room : 50,557 taka." << endl;
            cout << "2.Premier Double Room  : 50,557  taka." << endl;
            cout << "3.Family Room : 50,953 taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 50557;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 50557;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 50953;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        }

        break;

        // Kuakata

    case 5:

        cout << "Welcome to Kuakata " << endl;
        cout << "Please Check the Hotels Avaiable in Cox's Bazar. " << endl;
        cout << "1.Hotel Khan Palace." << endl;
        cout << "2.Sawpnorajjo Park & Resort." << endl;
        cout << "3.Banorupa Kuakata hotel." << endl;
        cout << "4.Hotel Rose Garden" << endl;

        cout << "Please Select the Hotel : ";
        int hotels;
        cin >> hotels;

        switch (hotels)
        {
        case 1:
        {
            cout << "Welcome to Hotel Khan Palace " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Superior King Room : 4,307 taka." << endl;
            cout << "2.Duplex Douple Room With Sea View : 5,300 taka." << endl;
            cout << "3.Family Room : 4,638 taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 4307;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 5300;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 4638;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 2:
        {
            cout << "Welcome Sawpnorajjo Park & Resort " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Standard Double Room  : 1,543  taka." << endl;
            cout << "2.Deluxe Double Room : 2,205  taka." << endl;
            cout << "3.Economy Quadruple Room : 2,205 taka." << endl;
            cout << "4.Deluxe Quadruple Room  : 2,646  taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 1543;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 2205;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 2205;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 4)
            {
                int cost = 2646;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 3:
        {
            cout << "Welcome Banorupa Kuakata hotel." << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Deluxe Double Room : 2,425 taka." << endl;
            cout << "2.Deluxe Double Room with Balcony and Sea View : 3,087 taka." << endl;
            cout << "3.Duplex Quadruple Room : 3,087  taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 2425;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 3087;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 3087;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        case 4:
        {
            cout << "Welcome Hotel Rose Garden " << endl;
            cout << "Please Check the Hotels Room Costs for Per Day. " << endl;
            cout << "1.Premier Twin Room : 4,557 taka." << endl;
            cout << "2.Premier Double Room  : 4,557  taka." << endl;
            cout << "3.Family Room : 5,953 taka." << endl;

            int room, day;
            cout << "Enter the Room : ";
            cin >> room;

            cout << "Enter the staying day : ";
            cin >> day;
            int service_charge = 500, gaming_room = 300;
            if (room == 1)
            {
                int cost = 5557;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 2)
            {
                int cost = 5557;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }

            else if (room == 3)
            {
                int cost = 5953;
                int totall_cost = (day * cost) + service_charge + gaming_room;
                cout << "The Totall Bill : " << totall_cost;
            }
        }
        break;
        }

        break;
    }
    return 0;
}
