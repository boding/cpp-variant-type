/************************************************
 *
 * file  : var.h
 * author: bobding
 * date  : 2014-10-24
 * detail:
 *
************************************************/

#ifndef _VAR_H_
#define _VAR_H_

#include "cocos2d.h"
#include <string>

class var
{
public:
    var()
    {
        clear();
    }

    ~var()
    {
        clear();
    }

    var(const var& rhs)
    {
        if (STRING == rhs.mType)
        {
            mValue.stringValue = new std::string(*rhs.mValue.stringValue);
        }
        else
        {
            mValue = rhs.mValue;
        }

        mType = rhs.mType;
    }

    var& operator = (const var& rhs)
    {
        if (STRING == rhs.mType)
        {
            mValue.stringValue = new std::string(*rhs.mValue.stringValue);
        }
        else
        {
            mValue = rhs.mValue;
        }

        mType = rhs.mType;

        return *this;
    }

    /* boolean *********************************/
    var(bool value)
    {
        clear();
        mType = BOOL;
        mValue.booleanValue = value;
    }

    var& operator = (bool value)
    {
        clear();
        mType = BOOL;
        mValue.booleanValue = value;
        return *this;
    }

    bool asBool() const
    {
        CCASSERT(BOOL == mType, "[var::asBool] got invalid type.");
        return mValue.booleanValue;
    }

    /* signed char *****************************/
    var(signed char value)
    {
        clear();
        mType = INT8;
        mValue.int8Value = value;
    }

    var& operator = (char value)
    {
        clear();
        mType = INT8;
        mValue.int8Value = value;
        return *this;
    }

    char asChar() const
    {
        CCASSERT(INT8 == mType, "[var::asChar] got invalid type.");
        return mValue.int8Value;
    }

    /* unsigned char ***************************/
    var(unsigned char value)
    {
        clear();
        mType = INT8;
        mValue.int8Value = (char)value;
    }

    var& operator = (unsigned char value)
    {
        clear();
        mType = INT8;
        mValue.int8Value = (char)value;
        return *this;
    }

    unsigned char asUChar() const
    {
        CCASSERT(INT8 == mType, "[var::asUChar] got invalid type.");
        return (unsigned char)mValue.int8Value;
    }

    /* short ***********************************/
    var(short value)
    {
        clear();
        mType = INT16;
        mValue.int16Value = value;
    }

    var& operator = (short value)
    {
        clear();
        mType = INT16;
        mValue.int16Value = value;
        return *this;
    }

    short asShort() const
    {
        CCASSERT(INT16 == mType, "[var::asShort] got invalid type.");
        return mValue.int16Value;
    }

    /* unsigned short **************************/
    var(unsigned short value)
    {
        clear();
        mType = INT16;
        mValue.int16Value = (short)value;
    }

    var& operator = (unsigned short value)
    {
        clear();
        mType = INT16;
        mValue.int16Value = (short)value;
        return *this;
    }

    unsigned short asUShort() const
    {
        CCASSERT(INT16 == mType, "[var::asUShort] got invalid type.");
        return (unsigned short)mValue.int16Value;
    }

    /* int *************************************/
    var(int value)
    {
        clear();
        mType = INT32;
        mValue.int32Value = value;
    }

    var& operator = (int value)
    {
        clear();
        mType = INT32;
        mValue.int32Value = value;
        return *this;
    }

    int asInt() const
    {
        CCASSERT(INT32 == mType, "[var::asInt] got invalid type.");
        return mValue.int32Value;
    }

    /* unsigned int ****************************/
    var(unsigned int value)
    {
        clear();
        mType = INT32;
        mValue.int32Value = (int)value;
    }

    var& operator = (unsigned int value)
    {
        clear();
        mType = INT32;
        mValue.int32Value = (int)value;
        return *this;
    }

    unsigned int asUInt() const
    {
        CCASSERT(INT32 == mType, "[var::asUInt] got invalid type.");
        return (unsigned int)mValue.int32Value;
    }

    /* int64 ***********************************/
    var(long long value)
    {
        clear();
        mType = INT64;
        mValue.int64Value = value;
    }

    var& operator = (long long value)
    {
        clear();
        mType = INT64;
        mValue.int64Value = value;
        return *this;
    }

    long long asInt64() const
    {
        CCASSERT(INT64 == mType, "[var::asInt64] got invalid type.");
        return mValue.int64Value;
    }

    /* unsigned int64 **************************/
    var(unsigned long long value)
    {
        clear();
        mType = INT64;
        mValue.int64Value = (long long)value;
    }

    var& operator = (unsigned long long value)
    {
        clear();
        mType = INT64;
        mValue.int64Value = (long long)value;
        return *this;
    }

    unsigned long long asUInt64() const
    {
        CCASSERT(INT64 == mType, "[var::asUInt64 got] invalid type.");
        return (unsigned long long)mValue.int64Value;
    }

    /* pointer *********************************/
    var(void* value)
    {
        clear();
        mType = POINTER;
        mValue.pointerValue = value;
    }

    var& operator = (void* value)
    {
        clear();
        mType = POINTER;
        mValue.pointerValue = value;
        return *this;
    }

    void* asPointer() const
    {
        CCASSERT(POINTER == mType, "[var::asPointer] got invalid type.");
        return mValue.pointerValue;
    }

    /* float ***********************************/
    var(float value)
    {
        clear();
        mType = FLOAT;
        mValue.floatValue = value;
    }

    var& operator = (float value)
    {
        clear();
        mType = FLOAT;
        mValue.floatValue = value;
        return *this;
    }

    float asFloat() const
    {
        CCASSERT(FLOAT == mType, "[var::asFloat] got invalid type.");
        return mValue.floatValue;
    }

    /* double **********************************/
    var(double value)
    {
        clear();
        mType = DOUBLE;
        mValue.doubleValue = value;
    }

    var& operator = (double value)
    {
        clear();
        mType = DOUBLE;
        mValue.doubleValue = value;
        return *this;
    }

    double asDouble() const
    {
        CCASSERT(DOUBLE == mType, "[var::asDouble] got invalid type.");
        return mValue.doubleValue;
    }

    /* string **********************************/
    var(const char* value)
    {
        clear();
        mType = STRING;
        mValue.stringValue = new std::string(value);
    }

    var(const std::string& value)
    {
        clear();
        mType = STRING;
        mValue.stringValue = new std::string(value);
    }

    var& operator = (const char* value)
    {
        clear();
        mType = STRING;
        mValue.stringValue = new std::string(value);
        return *this;
    }

    var& operator = (const std::string& value)
    {
        clear();
        mType = STRING;
        mValue.stringValue = new std::string(value);
        return *this;
    }

    std::string& asString() const
    {
        CCASSERT(STRING == mType, "[var::asString] got invalid type.");
        CCASSERT(0 != mValue.stringValue, "[var::asString] got invalid type.");

        return *mValue.stringValue;
    }

protected:
    enum Type
    {
        NONE, BOOL, INT8, INT16, INT32, INT64, POINTER, FLOAT, DOUBLE, STRING,
    };

    union Value
    {
        bool         booleanValue;
        signed char  int8Value;
        short        int16Value;
        int          int32Value;
        long long    int64Value;
        void*        pointerValue;
        float        floatValue;
        double       doubleValue;
        std::string* stringValue;

        Value()
        {
            memset(this, 0, sizeof(Value));
        }
    };

    void clear()
    {
        if (STRING == mType && 0 != mValue.stringValue)
        {
            mValue.stringValue->clear();
            delete mValue.stringValue;
        }

        memset(&mValue, 0, sizeof(Value));

        mType = NONE;
    }

protected:
    Type mType;
    Value mValue;
};

#endif // _VAR_H_