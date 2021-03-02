# Serial-FSK

Rewrite of my [LoRa Serial Control Firmware](https://github.com/FevenKitsune/LoRa-Serial-Defined-Control-Software) using Frequency Shift Keying (FSK).
I was unable to use LoRa modulation in a study environment for analysis and demodulation via GNU Radio due to the proprietary nature of LoRa.
This rewrite contains greatly improved code structure and use of preprocessor directives for improved code clarity.

## How to access device...

I've found that [Termite](https://www.compuphase.com/software_termite.htm) works the best.

Settings:

| Setting          | Value          |                    |
|------------------|----------------|--------------------|
| Baud rate        | 9600           |                    |
| Flow control     | RTS/CTS        |                    |
| Transmitted Text | Append Nothing | Local echo = False |

Close port when inactive is very useful when flashing multiple versions one after another.
