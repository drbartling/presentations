
design_principles.pdf: design_principles.aux
	@pdflatex --halt-on-error design_principles.tex > /dev/null

design_principles.aux: design_principles.tex
	@pdflatex --halt-on-error design_principles.tex > build.log
	@pdflatex --halt-on-error design_principles.tex > /dev/null

clean:
	git clean -xdf
