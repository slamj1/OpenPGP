#include "Tag2Sub2.h"

Tag2Sub2::Tag2Sub2()
    : Tag2Subpacket(Tag2Subpacket::SIGNATURE_CREATION_TIME, 4),
      time()
{}

Tag2Sub2::Tag2Sub2(const std::string & data)
    : Tag2Sub2()
{
    read(data);
}

void Tag2Sub2::read(const std::string & data){
    time = toint(data, 256);
}

std::string Tag2Sub2::show(const std::size_t indents, const std::size_t indent_size) const{
    const std::string indent(indents * indent_size, ' ');
    const std::string tab(indent_size, ' ');
    return indent + show_title() + "\n" +
           indent + tab + "Creation Time: " + show_time(time);
}

std::string Tag2Sub2::raw() const{
    return unhexlify(makehex(static_cast <uint32_t> (time), 8));
}

uint32_t Tag2Sub2::get_time() const{
    return time;
}

void Tag2Sub2::set_time(const uint32_t t){
    time = t;
}

Tag2Subpacket::Ptr Tag2Sub2::clone() const{
    return std::make_shared <Tag2Sub2> (*this);
}
