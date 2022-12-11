#include <iostream>

using namespace std;
enum CodeError
{
    OK,
    NOT_ENOUGH_MEMORY,
    OUT_OF_RANGE
};
class VectorShort
{
    short *data;
    int size;

    friend istream &operator>>(istream &in, VectorShort &other);
    friend ostream &operator<<(ostream &out, VectorShort &other);

public:
    VectorShort()
    {
        size = 1;
        data = 0;
    }
    VectorShort(int size)
    {
        this->size = size;
        this->data = new short[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = 0;
        }
    }
    VectorShort(int size, short value)
    {
        this->size = size;
        this->data = new short[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = value;
        }
    }
    VectorShort(const VectorShort &other)
    {
        this->size = other.size;
        this->data = new short[other.size];
        for (int i = 0; i < other.size; i++)
        {
            this->data[i] = other.data[i];
        }
    }
    ~VectorShort()
    {
        delete[] data;
    }

    VectorShort &operator=(const VectorShort &other)
    {
        this->size = other.size;
        if (this->data != nullptr)
        {
            delete[] this->data;
        }
        this->data = new short[other.size];
        for (int i = 0; i < other.size; i++)
        {
            this->data[i] = other.data[i];
        }
        return *this;
    }
    VectorShort &operator+(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return *this;
        }
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] += other.data[i];
        }
        return *this;
    }
    VectorShort &operator+(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] += value;
        }
        return *this;
    }
    VectorShort &operator-(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] -= value;
        }
        return *this;
    }
    VectorShort &operator-(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return *this;
        }
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] -= other.data[i];
        }
        return *this;
    }
    VectorShort &operator*(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return *this;
        }
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] *= other.data[i];
        }
        return *this;
    }
    VectorShort &operator*(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] *= value;
        }
        return *this;
    }
    VectorShort &operator/(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] /= value;
        }
        return *this;
    }
    VectorShort &operator%(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] %= value;
        }
        return *this;
    }
    VectorShort &operator|(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return *this;
        }
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] |= other.data[i];
        }
        return *this;
    }
    VectorShort &operator|(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] |= value;
        }
        return *this;
    }
    VectorShort &operator^(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return *this;
        }
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] ^= other.data[i];
        }
        return *this;
    }
    VectorShort &operator^(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] ^= value;
        }
        return *this;
    }
    VectorShort &operator&(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return *this;
        }
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] &= other.data[i];
        }
        return *this;
    }
    VectorShort &operator&(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] &= value;
        }
        return *this;
    }
    VectorShort &operator+=(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return *this;
        }
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] += other.data[i];
        }
        return *this;
    }
    VectorShort &operator+=(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] += value;
        }
        return *this;
    }
    VectorShort &operator-=(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return *this;
        }
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] -= other.data[i];
        }
        return *this;
    }
    VectorShort &operator-=(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] -= value;
        }
        return *this;
    }
    VectorShort &operator*=(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] *= value;
        }
        return *this;
    }
    VectorShort &operator/=(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] /= value;
        }
        return *this;
    }
    VectorShort &operator%=(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] %= value;
        }
        return *this;
    }
    VectorShort &operator|=(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return *this;
        }
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] |= other.data[i];
        }
        return *this;
    }
    VectorShort &operator|=(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] |= value;
        }
        return *this;
    }
    VectorShort &operator^=(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return *this;
        }
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] ^= other.data[i];
        }
        return *this;
    }
    VectorShort &operator^=(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] ^= value;
        }
        return *this;
    }
    VectorShort &operator&=(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return *this;
        }
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] &= other.data[i];
        }
        return *this;
    }
    VectorShort &operator&=(short value)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] &= value;
        }
        return *this;
    }

    VectorShort &operator++()
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i]++;
        }
        return *this;
    }
    VectorShort &operator--()
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i]--;
        }
        return *this;
    }
    VectorShort &operator++(int)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i]++;
        }
        return *this;
    }
    VectorShort &operator--(int)
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i]--;
        }
        return *this;
    }
    bool operator==(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return false;
        }
        for (int i = 0; i < this->size; i++)
        {
            if (this->data[i] != other.data[i])
            {
                return false;
            }
        }
        return true;
    }
    bool operator!=(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return true;
        }
        for (int i = 0; i < this->size; i++)
        {
            if (this->data[i] != other.data[i])
            {
                return true;
            }
        }
        return false;
    }
    VectorShort operator~()
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] = ~this->data[i];
        }
        return *this;
    }
    VectorShort operator-()
    {
        for (int i = 0; i < this->size; i++)
        {
            this->data[i] = -this->data[i];
        }
        return *this;
    }

    bool operator>(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return false;
        }
        for (int i = 0; i < this->size; i++)
        {
            if (this->data[i] <= other.data[i])
            {
                return false;
            }
        }
        return true;
    }
    bool operator<(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return false;
        }
        for (int i = 0; i < this->size; i++)
        {
            if (this->data[i] >= other.data[i])
            {
                return false;
            }
        }
        return true;
    }
    bool operator>=(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return false;
        }
        for (int i = 0; i < this->size; i++)
        {
            if (this->data[i] < other.data[i])
            {
                return false;
            }
        }
        return true;
    }
    bool operator<=(const VectorShort &other)
    {
        if (this->size != other.size)
        {
            return false;
        }
        for (int i = 0; i < this->size; i++)
        {
            if (this->data[i] > other.data[i])
            {
                return false;
            }
        }
        return true;
    }

    VectorShort operator[](int index)
    {
        if (index < 0 || index >= this->size)
        {
            return *this;
        }
        VectorShort temp(1);
        temp.data[0] = this->data[index];
        return temp;
    }

    VectorShort Print()
    {
        for (int i = 0; i < this->size; i++)
        {
            cout << this->data[i] << " ";
        }
        cout << endl;
        return *this;
    }
};

istream &operator>>(istream &is, VectorShort &a)
{
    for (int i = 0; i < a.size; i++)
    {
        is >> a.data[i];
    }
    return is;
}
ostream &operator<<(ostream &os, VectorShort &a)
{
    for (int i = 0; i < a.size; i++)
    {
        os << a.data[i] << " ";
    }
    return os;
}

int main()
{
    VectorShort a(5, 1);
    VectorShort b(5, 2);
    VectorShort c(6, -3);
    bool result = b != a;

    if (result)
    {
        cout << "Vectors are not equal" << endl;
    }
    else
    {
        cout << "Vectors are equal" << endl;
    }

    a.Print();
    b.Print();
    c.Print();
    cout << "--------------------------------" << endl;
    a.operator~();
    c.operator-();
    b = b | a;
    a.Print();
    b.Print();
    c.Print();

    return 0;
}