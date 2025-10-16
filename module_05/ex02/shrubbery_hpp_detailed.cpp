#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>   // Para std::ofstream (escrita em arquivo)
# include <string>

/**
 * @class ShrubberyCreationForm
 * @brief Formulário para criar um arquivo com árvores ASCII
 * 
 * Grades necessários:
 * - Sign: 145
 * - Execute: 137
 * 
 * Ao ser executado, cria um arquivo chamado <target>_shrubbery
 * no diretório de trabalho atual, contendo desenhos ASCII de árvores.
 */
class ShrubberyCreationForm : public AForm
{
private:
    std::string target;  // Nome do local onde plantar as árvores

protected:
    /**
     * @brief Implementação da ação específica do formulário
     * 
     * Cria um arquivo <target>_shrubbery e escreve árvores ASCII nele.
     * Este método é chamado por AForm::execute() após as validações.
     */
    void executeAction() const;

public:
    // ========== Orthodox Canonical Form ==========
    
    /**
     * @brief Construtor padrão
     * 
     * Cria um ShrubberyCreationForm com target "default"
     */
    ShrubberyCreationForm();
    
    /**
     * @brief Construtor parametrizado
     * @param target Nome do local onde plantar as árvores
     * 
     * Cria um ShrubberyCreationForm para o target especificado.
     * Os grades são fixos: sign=145, exec=137
     */
    ShrubberyCreationForm(const std::string& target);
    
    /**
     * @brief Construtor de cópia
     * @param other ShrubberyCreationForm a ser copiado
     */
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    
    /**
     * @brief Operador de atribuição
     * @param other ShrubberyCreationForm a ser copiado
     * @return Referência para este objeto
     */
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    
    /**
     * @brief Destrutor
     */
    ~ShrubberyCreationForm();

    // ========== Getter ==========
    
    /**
     * @brief Obtém o target do formulário
     * @return String com o nome do target
     */
    std::string getTarget() const;
};

#endif