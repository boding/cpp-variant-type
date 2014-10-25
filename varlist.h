/************************************************
 *
 * file  : varlist.h
 * author: bobding
 * date  : 2014-10-24
 * detail:
 *
************************************************/

#ifndef _VARLIST_H_
#define _VARLIST_H_

#include "var.h"
#include <vector>

class varlist
{
public:
    ~varlist()
    {
        mVars.clear();
    }

    varlist& operator << (bool value)
    {
        return addBool(value);
    }

    varlist& operator << (signed char value)
    {
        return addChar(value);
    }

    varlist& operator << (unsigned char value)
    {
        return addUChar(value);
    }

    varlist& operator << (short value)
    {
        return addShort(value);
    }

    varlist& operator << (unsigned short value)
    {
        return addUShort(value);
    }

    varlist& operator << (int value)
    {
        return addInt(value);
    }

    varlist& operator << (unsigned int value)
    {
        return addUInt(value);
    }

    varlist& operator << (long long value)
    {
        return addInt64(value);
    }

    varlist& operator << (unsigned long long value)
    {
        return addUInt64(value);
    }

    varlist& operator << (void* value)
    {
        return addPointer(value);
    }

    varlist& operator << (float value)
    {
        return addFloat(value);
    }

    varlist& operator << (double value)
    {
        return addDouble(value);
    }

    varlist& operator << (const char* value)
    {
        return addString(value);
    }

    varlist& operator << (const std::string& value)
    {
        return addString(value);
    }

    varlist& addBool(bool value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    varlist& addChar(signed char value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    varlist& addUChar(unsigned char value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    varlist& addShort(short value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    varlist& addUShort(unsigned short value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    varlist& addInt(int value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    varlist& addUInt(unsigned int value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    varlist& addInt64(long long value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    varlist& addUInt64(unsigned long long value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    varlist& addPointer(void* value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    varlist& addFloat(float value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    varlist& addDouble(double value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    varlist& addString(const char* value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    varlist& addString(const std::string& value)
    {
        mVars.push_back(var(value));
        return *this;
    }

    unsigned int size()
    {
        return mVars.size();
    }

    const var& at(int index) const
    {
        CCASSERT(index >= 0 && index < (int)mVars.size(), "[varlist::at] invalid index.");
        return mVars[index];
    }

protected:
    std::vector<var> mVars;
};

#endif // _VARLIST_H_