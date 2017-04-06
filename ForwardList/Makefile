CXX=g++
RM=rm -f
CXXFLAGS= -g -c -Wall -Wextra -D_REENTRANT --std=c++1y
LDFLAGS=
LDLIBS=

PROGRAM_NAME="ForwardList"

SRCDIR=src
SOURCES=$(shell find $(SRCDIR) -name "*.cc")
BINDIR=bin
OBJDIR=$(BINDIR)/obj
OBJECTS=$(patsubst $(SRCDIR)/%.cc, $(OBJDIR)/%.o, $(SOURCES))

.PHONY: all clean dirs re run

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $(BINDIR)/$(PROGRAM_NAME) $(OBJECTS) $(LDLIBS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cc
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)
	$(RM) $(BINDIR)/$(PROGRAM_NAME)

dirs:
	@mkdir -p $(BINDIR)
	@mkdir -p $(OBJDIR)
	@mkdir -p $(SRCDIR)
	@echo "Directory structure has been created."

re: clean all

run: ${PROGRAM_NAME}
	@$(BINDIR)/${PROGRAM_NAME}

print-%:
	@echo $* = $($*)
