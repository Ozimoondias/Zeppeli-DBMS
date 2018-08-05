#include <iostream>

#include <readline/readline.h>
#include <readline/history.h>

void	parse_line(const std::string& line)
{
  std::cout << line << std::endl;
}

int	main(int ac, char** av)
{
  while (char* line_ = readline("Zeppeli> "))
  {
    add_history(line_);
    std::string line(line_);
    free(line_);
    parse_line(line);
  }
  return 0;
}
