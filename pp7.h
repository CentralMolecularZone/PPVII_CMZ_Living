\usepackage{times}
\usepackage{amsmath}
\usepackage{fancyhdr}
\usepackage{makeidx}
\usepackage{index}
\usepackage{xcolor}
\usepackage[dvipdfmx]{hyperref}

% Define header and footer information for default.

\fancyhead[L]{\sauthors} %Left   Header
\fancyhead[C]{}                                 %Center Header
\fancyhead[R]{\stitle}                    %Right  Header

\fancyfoot[L]{}                                 %Left   Footer
\fancyfoot[C]{\thepage}                         %Center Footer
\fancyfoot[R]{}                                 %Right  Footer

\renewcommand{\headrulewidth}{0pt} 
\renewcommand{\footrulewidth}{0pt}

% Define header and footer for the first page.
\fancypagestyle{fancy1st}{                      %Define style "fancy1st"
    \fancyhead[L]{}                             %Overwrite Left   Header
    \fancyhead[C]{}                             %Overwrite Center Header
    \fancyhead[R]{}                             %Overwrite Right  Header

    \fancyfoot[L]{Protostars and Planets VII}   %Overwrite Left   Footer
    \fancyfoot[C]{}                             %Overwrite Center Footer
    \fancyfoot[R]{}                             %Overwrite Right  Footer
%   \fancyfoot[R]{Shu-ichiro Inutsuka, Motohide Tamura, Yuri Aikawa, Takayuki Muto, \& Kengo Tomida (eds.)} 
}
\voffset=-0.25in
\pagestyle{fancy}
\thispagestyle{fancy1st}

\makeindex
\newindex{obj}{oidx}{oind}{Object Index}

\hypersetup{%
 setpagesize=false,%
 bookmarks=true,%
 bookmarksdepth=1,%
 bookmarksnumbered=true,%
 colorlinks=true,%
 allcolors=blue,%
 pdftitle={Protostars and Planets VII},%
 pdfsubject={},%
 pdfauthor={Shu-ichiro Inutsuka, Motohide Tamura, Yuri Aikawa, Takayuki Muto, \& Kengo Tomida (eds.)},%
 pdfkeywords={}}
