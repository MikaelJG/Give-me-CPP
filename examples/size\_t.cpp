
template<typename Value_Type>
struct Data {
    Data(const std::size_t size)
      : data(new Value_Type[size])
    {
    }

    ~Data() { delete [] data; }

    Value_Type *data;
};


template<typename Value_Type>
struct Data {
    Data(const std::size_t size)
      : data(new Value_Type[size]) // constructor
    {
    }

    ~Data() { delete [] data; }

    Value_Type *data;
};

