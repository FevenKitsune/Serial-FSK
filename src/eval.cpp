// Evaluate command

#include "eval.hpp"

String arg(String &input, uint8_t index)
{
    String scratch = input;

    // Remove index # of words from input string.
    for (uint8_t i = 0; i < index; i++)
    {
        // Clears string up to next space. data.indexOf(' ') will return -1 if no space is found.
        // Therefore, data.indexOf(' ') + 1 == 0 or False
        scratch.remove(0, scratch.indexOf(' ') + 1 ? scratch.indexOf(' ') + 1 : scratch.length());
    }
    // Remove all words after the first word.
    scratch.remove(scratch.indexOf(' ') + 1 ? scratch.indexOf(' ') : scratch.length());
    return scratch;
}