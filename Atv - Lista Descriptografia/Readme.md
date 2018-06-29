# Cifras

Fiz este trabalho com o Leo Jaimesson e o Gleydson Rodruigues.

## 1.) O que são chaves simétricas e assimétricas?
- A criptografia simétrica usa a mesma chave tanto para criptografar como para descriptografar dados. Os algoritmos que são usados para a criptografia simétrica são mais simples do que os algoritmos usados na criptografia assimétrica. Em função desses algoritmos mais simples, e porque a mesma chave é usada tanto para criptografar como para descriptografar dados, a criptografia simétrica é muito mais rápida que a criptografia assimétrica. Portanto, a criptografia simétrica é adequada à criptografia e à descriptografia de uma grande quantidade de dados.

- Na criptografia Assimétrica (ou criptografia de chave pública) temos que a chave de cifração é diferente da chave de decifração e uma não pode ser facilmente gerada a partir da outra. Basicamente temos que no processo de encriptação utilizaremos uma chave “k1” em cima da mensagem em texto puro que então irá gerar um texto cifrado. Após isso, no processo de descriptografia usaremos outra chave “k2” em cima do texto cifrado e teremos como resposta de volta o texto claro. 

## 2.) Quais as diferenças?

-  simétrica : chave é usada tanto para criptografar como para descriptografar dados, a criptografia simétrica é muito mais rápida que a criptografia assimétrica. Portanto, a criptografia simétrica é adequada à criptografia e à descriptografia de uma grande quantidade de dados.

- assimetrica: Com a criptografia assimétrica, somente uma parte mantém a chave privada. Essa parte é conhecida como o assunto. Todas as outras partes podem acessar a chave pública. Os dados criptografadas por meio da chave pública só podem ser descriptografados com o uso da chave privada. Por outro lado, os dados criptografados por meio da chave privada só podem ser descriptografados com o uso da chave pública. Por conseguinte, esse tipo de criptografia fornece confidencialidade e não-repúdio.

## 3.) Dê exemplos reais de algoritmos que usem essa chave.

- (simetrico) O Blowfish apresenta uma rede de Feistel de 16 iterações com tamanho de bloco de 64-bits, uma chave que pode variar entre 32 a 448-bits, e S-boxes altamente chaves-dependentes, tornando-o ideal para aplicações tanto domésticas, quanto comerciais. O Blowfish foi desenvolvido em 1993 por Bruce Schneier como uma alternativa grátis mais rápida para os algorítmos criptográficos existentes. Desde então ele vem sendo analisado de forma considerável e está conquistando a aceitação do mercado como um algoritmo forte. O Blowfish não é patenteado, tem sua licença grátis e está a disposição para todos.

- (assimetrico) O RSA é o método de criptografia mais utilizado no mundo. No RSA utilizamos duas chaves, uma chave para encriptação e outra para decriptação. Ele resolve o problema de distribuição de chaves da criptografia simétrica usando envelopamento digital e a segurança é baseada na fatoração de números extensos. Quanto maior a chave maior a segurança, porém o processamento também é maior. A construção de chaves é feita através da multiplicação de A construção de chaves é feita através da multiplicação de dois números primos relativamente grandes que gera um número que será elevado a um expoente que é um número público, e após isso ele é novamente elevado a outro expoente que é um número privado.

## 4.) Dê um exemplo de onde elas são usadas em conjuntos.

- Não achamos a responta

## 5.) O que é um KDC? Dê um exemplo real.

- O KDC ( Centro Distribuidor de Chaves ) trata-se de um servidor centralizado também responsável pela autenticação dos usuários. O KDC autentica o usuário, também chamado principal, através de um ticket, que será utilizado para provar a identidade do usuário para os serviços disponíveis na rede.

## 6.) Como funciona o GPG?

- O GnuPG permite criptografar e assinar seus dados e comunicações; Possui um sistema de gerenciamento de chaves versátil, juntamente com módulos de acesso para todos os tipos de diretórios de chave pública. O GnuPG, também conhecido como GPG , é uma ferramenta de linha de comando com recursos para fácil integração com outras aplicações. Uma grande variedade de aplicativos e bibliotecas frontend estão disponíveis. O GnuPG também oferece suporte para S / MIME e Secure Shell (ssh).

## 7.) O que é ICP?
- A Infraestrutura de Chaves Públicas Brasileira – ICP-Brasil é uma cadeia hierárquica de confiança que viabiliza a emissão de certificados digitais para identificação virtual do cidadão.

## 8.) Por que dá o erro de certificado em alguns site incluse no da CAIXA.

- Após a atualização do Java a partir da versão 51, a Oracle deixou o aplicativo com a configuração de segurança Alta, forçando os navegadores a executar aplicações Java apenas por certificados de autoridades confiáveis. Enquanto a Caixa não regulariza a situação com a empresa fundadora do Java (se é essa a resolução que deve ser tomada) há algumas alternativas para garantir o acesso ao canal quando lhe retornar o Erro 264 Conectividade Social ICP.
