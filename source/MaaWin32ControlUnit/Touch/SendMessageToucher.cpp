#include "SendMessageToucher.h"

MAA_CTRL_UNIT_NS_BEGIN

bool SendMessageToucher::click(int x, int y)
{
    // TODO
    std::ignore = x;
    std::ignore = y;

    return false;
}

bool SendMessageToucher::swipe(int x1, int y1, int x2, int y2, int duration)
{
    // TODO
    std::ignore = x1;
    std::ignore = y1;
    std::ignore = x2;
    std::ignore = y2;
    std::ignore = duration;

    return false;
}

bool SendMessageToucher::touch_down(int contact, int x, int y, int pressure)
{
    // TODO
    std::ignore = contact;
    std::ignore = x;
    std::ignore = y;
    std::ignore = pressure;

    return false;
}

bool SendMessageToucher::touch_move(int contact, int x, int y, int pressure)
{
    // TODO
    std::ignore = contact;
    std::ignore = x;
    std::ignore = y;
    std::ignore = pressure;

    return false;
}

bool SendMessageToucher::touch_up(int contact)
{
    // TODO
    std::ignore = contact;

    return false;
}

MAA_CTRL_UNIT_NS_END
