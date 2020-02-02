
twopi_files = $(wildcard *.twopi)
dot_files   = $(wildcard *.dot)
png_files  += $(patsubst %.dot,%.png,$(dot_files))
png_files  += $(patsubst %.twopi,%.png,$(twopi_files))
c_files     = $(wildcard *.c)
cpp_files   = $(wildcard *.cpp)
o_files     = $(patsubst %.cpp,%.o,$(cpp_files))
o_files    += $(patsubst %.c,%.o,$(c_files))


default: design_principles.pdf

design_principles.pdf: build_2.log
	pdflatex                  \
	    -file-line-error      \
		-shell-escape         \
		-halt-on-error        \
		design_principles.tex \
		> build_pdf.log       \
		2> err_pdf.pdf.log

build_2.log: build_1.log
	pdflatex                  \
		-draftfile            \
	    -file-line-error      \
		-shell-escape         \
		-halt-on-error        \
		design_principles.tex \
		> build_2.log         \
		2> err_2.log

build_1.log: design_principles.tex $(o_files) $(png_files)
	pdflatex                  \
	    -file-line-error      \
		-shell-escape         \
		-halt-on-error        \
		design_principles.tex \
		> build_1.log         \
		2> err_1.log

check: $(o_files)

%.png:: %.twopi
	twopi -Tpng $< -o $@

%.png:: %.dot
	dot -Tpng $< -o $@

%.o:: %.c .clang-format
	clang-format -i $<
	clang -fcolor-diagnostics -c $<

%.o:: %.cpp .clang-format
	clang-format -i $<
	clang++ -fcolor-diagnostics -c $<

clean:
	git clean -Xdf
