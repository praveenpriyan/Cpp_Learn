template <>
struct Traits<Color>
{
    static const char* name(int index){
        switch(static_cast<Color>(index)){
            case Color::red:return "red";
            case Color::green:return "green";
            case Color::orange:return "orange";
            default:return "unknown";
        }
    }
};

template<>
struct Traits<Fruit>
{
    static const char* name(int index){
        switch(static_cast<Fruit>(index))
        {
            case Fruit::apple:return "apple";
            case Fruit::orange:return "orange";
            case Fruit::pear:return "pear";
            default:return "unknown";
        }
    }
};