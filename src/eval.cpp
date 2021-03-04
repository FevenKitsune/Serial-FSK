// Evaluate command

#include "eval.hpp"

String arg(String input, uint8_t index)
{
    // Remove index # of words from input string.
    for (uint8_t i = 0; i < index; i++)
    {
        // Clears string up to next space. data.indexOf(' ') will return -1 if no space is found.
        // Therefore, data.indexOf(' ') + 1 == 0 or False
        input.remove(0, input.indexOf(' ') + 1 ? input.indexOf(' ') + 1 : input.length());
    }
    // Remove all words after the first word.
    input.remove(input.indexOf(' ') + 1 ? input.indexOf(' ') : input.length());
    return input;
}

String argToEnd(String input, uint8_t index)
{
    // Remove index # of words from input string.
    for (uint8_t i = 0; i < index; i++)
    {
        // Clears string up to next space. data.indexOf(' ') will return -1 if no space is found.
        // Therefore, data.indexOf(' ') + 1 == 0 or False
        input.remove(0, input.indexOf(' ') + 1 ? input.indexOf(' ') + 1 : input.length());
    }
    return input;
}