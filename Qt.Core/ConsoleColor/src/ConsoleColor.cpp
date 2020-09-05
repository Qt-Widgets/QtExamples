#include <QString>
#include <QTextStream>
#include <QVector>

int main() {
  const QVector<QString> logo = {
    "████████████████████████████████████████████████████████████",
    "██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░██████",
    "██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████",
    "██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░██████████",
    "██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████",
    "██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████",
    "██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████",
    "███████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░█████████████",
    "██████████████████████████████████████████████████████████████████████",
    "██████████████████████████████████████████████████████████████████████",
    "██████████████████████████▀▄▄▄▄▀███████▀▄▄▄▄▀█████████████████████████",
    "███████████████████████████▀▀▀▀███████▀▀▀▀▀███████████████████████████",
    "██████████████████████████      ▀████       ▀█████████████████████████",
    "███████████             ▐         ▀▀         ▐              ██████████",
    "█████████               ▐   ███   ▌▐   ███   ▐               █████████",
    "█████████               ▐   █▄▄▌  ▌▐  ▐▄▄█   ▐               █████████",
    "█████████                ▐▄  ▀▀ ▄▀  ▀▄ ▀▀  ▄▀                █████████",
    "█████████                  ▀▀▄▄▀      ▀▀▄▄▀                  █████████",
    "█████████                                                    █████████",
    "█████████                 █▄                ▌                █████████",
    "█████████                  ▌▀▀▄          ▄██                 █████████",
    "█████████                  ▐   ▀▀▄▄▄▄▄▄█▀ █▌                 █████████",
    "█████████                   ▐            ▄█                  █████████",
    "█████████                    █          ▄█                   █████████",
    "█████████                     ▀▄       █▀                    █████████",
    "█████████                       ▀▄▄▄▄██▀                     █████████",
    "█████████                                                    █████████",
    "█████████                                                    █████████",
    "█████████                                                    █████████",
    "█████████                                                    █████████",
    "█████████                                                    █████████",
    "██████████████████████████████████████████████████████████████████",
  };

  const auto backgroundWhite = "\033[47m";
  const auto backgroundReset = "\033[49m";
  const auto foregroundDarkGray = "\033[90m";
  const auto foregroundDarkBlue = "\033[94m";
  const auto foregroundReset = "\033[39m";

  QTextStream out(stdout);

  for (int index = 0; index < logo.size(); ++index) {
    out << (index == 0 || index == logo.size() - 1 ? "       " : "     ");
    out << foregroundDarkBlue;
    out << backgroundWhite;
    out << logo[index];
    out << foregroundReset;
    out << backgroundReset;
    out << endl;
  }

  out << foregroundDarkBlue;
  out << "                                    Gammasoft                                   " << endl;
  out << foregroundDarkGray;
  out << " More than thirty years of passion for high technology especially in development" << endl;
  out << " (c++, c#, objective-c, ...)." << endl;
  out << foregroundReset;
}

// This code produces the following output with colors:
//
//        ████████████████████████████████████████████████████████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░██████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░██████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████
//      ███████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░█████████████
//      ██████████████████████████████████████████████████████████████████████
//      ██████████████████████████████████████████████████████████████████████
//      ██████████████████████████▀▄▄▄▄▀███████▀▄▄▄▄▀█████████████████████████
//      ███████████████████████████▀▀▀▀███████▀▀▀▀▀███████████████████████████
//      ██████████████████████████      ▀████       ▀█████████████████████████
//      ███████████             ▐         ▀▀         ▐              ██████████
//      █████████               ▐   ███   ▌▐   ███   ▐               █████████
//      █████████               ▐   █▄▄▌  ▌▐  ▐▄▄█   ▐               █████████
//      █████████                ▐▄  ▀▀ ▄▀  ▀▄ ▀▀  ▄▀                █████████
//      █████████                  ▀▀▄▄▀      ▀▀▄▄▀                  █████████
//      █████████                                                    █████████
//      █████████                 █▄                ▌                █████████
//      █████████                  ▌▀▀▄          ▄██                 █████████
//      █████████                  ▐   ▀▀▄▄▄▄▄▄█▀ █▌                 █████████
//      █████████                   ▐            ▄█                  █████████
//      █████████                    █          ▄█                   █████████
//      █████████                     ▀▄       █▀                    █████████
//      █████████                       ▀▄▄▄▄██▀                     █████████
//      █████████                                                    █████████
//      █████████                                                    █████████
//      █████████                                                    █████████
//      █████████                                                    █████████
//      █████████                                                    █████████
//        ██████████████████████████████████████████████████████████████████
//                                      Gammasoft
//      More than thirty years of passion for high technology especially in development
//      (c++, c#, objective-c, ...).
