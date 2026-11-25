#include "twelve_days.h"
#include <string>

namespace twelve_days {
    constexpr const char* ordinals[] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth"};
    constexpr const char* items[] = {"a Partridge in a Pear Tree.", "two Turtle Doves", "three French Hens", "four Calling Birds", "five Gold Rings", "six Geese-a-Laying", "seven Swans-a-Swimming", "eight Maids-a-Milking", "nine Ladies Dancing", "ten Lords-a-Leaping", "eleven Pipers Piping", "twelve Drummers Drumming"};
    std::string verse(int ord) {
        std::string r = std::string("On the ") + ordinals[ord] + " day of Christmas my true love gave to me: ";
        for (int i = ord; i > 0; --i) (r += items[i]) += (i > 1 ? ", " : ", and ");
        return r + items[0];
    }
    std::string recite(int start, int end) {
        std::string r;
        for (int i = start; i <= end; ++i) r += verse(i - 1) + (i < end ? "\n\n" : "\n");
        return r;
    }
}