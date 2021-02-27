// Evaluate command

#include "eval.h"

String arg(String &input, uint8_t index)
{
    String scratch = input;
    
    // Remove index # of words from input string.
    for (uint8_t i = 0; i < index; i++)
    {
        scratch.remove(0, scratch.indexOf(' ') + 1 ? scratch.indexOf(' ') + 1 : scratch.length());
    }
    // Remove all words after the first word.
    scratch.remove(scratch.indexOf(' ') + 1 ? scratch.indexOf(' ') : scratch.length());
    return scratch;
}