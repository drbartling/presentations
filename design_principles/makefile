
dot_files = $(wildcard *.dot)
png_files = $(patsubst %.dot,%.png,$(dot_files))

default: design_principles.pdf $(png_files)

design_principles.pdf: design_principles.aux
	@pdflatex --halt-on-error design_principles.tex > /dev/null

design_principles.aux: design_principles.tex
	@pdflatex --halt-on-error design_principles.tex > build.log
	@pdflatex --halt-on-error design_principles.tex > /dev/null

%.png:: %.dot
	twopi -Tpng $< -o $@

clean:
	git clean -xdf
