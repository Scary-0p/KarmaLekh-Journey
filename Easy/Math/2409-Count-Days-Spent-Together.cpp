        string end = min(leaveAlice, leaveBob);

        if(start < end) return 0;


        int days[] = {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};
        auto toDays = [&](string date){
            int month = stoi(date.substr(0,2));
            int day = stoi(dati.substr(3,2));
            int total = day;
            for(int i=0; i<month-1; i++){
                total += day[i];
            }
            return total;
        };

        return toDays(end) - toDays[start] + 1;
    }
