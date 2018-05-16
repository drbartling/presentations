
twopi_files = $(wildcard *.twopi)
dot_files   = $(wildcard *.dot)
png_files  += $(patsubst %.dot,%.png,$(dot_files))
png_files  += $(patsubst %.twopi,%.png,$(twopi_files))
c_files     = $(wildcard *.c)

default: design_principles.pdf

design_principles.pdf: design_principles.aux
	@pdflatex -shell-escape -halt-on-error design_principles.tex > /dev/null 2> err.pdf.log

design_principles.aux: design_principles.tex $(png_files) $(c_files)
	@pdflatex -shell-escape -halt-on-error design_principles.tex > build.log 2> err.aux.log

%.png:: %.twopi
	twopi -Tpng $< -o $@

%.png:: %.dot
	dot -Tpng $< -o $@

clean:
	git clean -Xdf
