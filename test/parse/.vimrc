" autoload the local .vimrc file you need to have
" https://github.com/MarcWeber/vim-addon-local-vimrc
" plugin installed

let g:go_play_open_browser = 0
let g:go_fmt_fail_silently = 1

let g:syntastic_go_checkers = ['go']
let g:syntastic_enable_go_checker = 1
let g:syntastic_mode_map = {'mode': 'passive', 'active_filetypes': ['go']}

let g:ctrlp_open_new_file = 'r'

augroup GoLanguage
  au!
  au FileType go :nnoremap <buffer> <silent> <Leader>r :GoRun<CR>
  au FileType go :nnoremap <buffer> <silent> <Leader>d :GoDoc<CR>
  au FileType go :nnoremap <buffer> <silent> <Leader>k :GoDef<CR>
  au FileType go :nnoremap <buffer> <silent> <Leader>i :GoImports<CR>:w<CR>
augroup END

