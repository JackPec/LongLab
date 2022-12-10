/*

Long Lib


*/
#pragma once


//using namespace std;


class longEnchanced
{
    long val;

public:
    longEnchanced(long valIn = 0)
        :
        val(valIn)
    {

    }

    //reads from left to right!
    longEnchanced operator[](long whatPlace) const
    {
        return val / whatPlace % 10 > 0 ? val / whatPlace % 10 : -1;
    }

    longEnchanced operator() (long low, long high) //const
    {

        long c;

        if( high > low)
        {
            c = val % (high*10) / low;
        }
        else
        {
            c = val % (low*10) / high;
        }

        if( c == 0)
        {
            c = -1;
        }

        return c;

    }



    operator long (void) const
    {
        return val;

    }


    long get_val(void) const
    {

        return val;
    }


    void set_val(long valIn)
    {
        val = valIn;
    }


    friend std::istream & operator>>(std::istream & in,
                                     longEnchanced & r)
    {
        long a;
        in >> a;
        r.val = a;

        return in;

    }

    friend std::ostream & operator<<(std::ostream & out,
                                     const longEnchanced & r)
    {
        out << r.val;
        return out;

    }

};
